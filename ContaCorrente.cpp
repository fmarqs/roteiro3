#include "ContaCorrente.h"

using namespace std;

ContaCorrente::ContaCorrente()
{

}

ContaCorrente::ContaCorrente(string nomeCliente, int numero, double saldo, double salario)
{
    setNome(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
    setSalario(salario);
}

void ContaCorrente::setSalario(double salario)
{
    this->salario = salario;
}

double ContaCorrente::getSalario()
{
    return salario;
}

double ContaCorrente::definirLimite()
{
    limite = salario*2;
    return limite;
}

int ContaCorrente::getLimite()
{
    return limite;
}
