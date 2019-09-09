#include "SistemaGerenciaFolha.h"
#include <string>

using namespace std;

int main()
{
    SistemaGerenciaFolha *g = new SistemaGerenciaFolha();

    Assalariado *as = new Assalariado();
    as->setNome("Flavio");
    as->setMatricula("4893893-39");
    as->setSalario(1500);
    g->setFuncionario(as);

    Horista *ho = new Horista();
    ho->setNome("Roberto");
    ho->setMatricula("98498342-32");
    ho->setHoras(42);
    ho->setSalarioPorHora(10);
    g->setFuncionario(ho);

    Comissionario *com1 = new Comissionario();
    com1->setNome("Paula");
    com1->setMatricula("990854034-23");
    com1->setBase(1500);
    com1->setVendas(10);
    com1->setPercentual(5);
    g->setFuncionario(com1);

    cout << "Assalariado #1" << "\nNome: " << as->getNome() << "\nMatricula: " << as->getMatricula() << as->calculaSalario();
    cout << "Horista #1" << "\nNome: " << ho->getNome() << "\nMatricula: " << ho->getMatricula() << ho->calculaSalario();
    cout << "Comissionado #1" << "\nNome: " << com1->getNome() << "\nMatricula: " << com1->getMatricula() << com1->calculaSalario();

    cout << "Valor total da folha: " << g->calculaValorTotalFolha();

}