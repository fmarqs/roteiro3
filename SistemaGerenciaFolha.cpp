#include "SistemaGerenciaFolha.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha()
{

}

void SistemaGerenciaFolha::setFuncionario(Funcionario *f)
{
    funcionarios.push_back(f);
}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{
    double folha=0;
    for(int i=0; i<funcionarios.size(); i++)
    {
        folha += funcionarios[i]->calculaSalario();
    }

    cout << folha << endl;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int pos)
{
    double salario = funcionarios[pos]->calculaSalario();
    return salario;
}
