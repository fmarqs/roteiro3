#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial()
{}

ContaEspecial::ContaEspecial(string nomeCliente, int numero, double saldo, double salario)
{
    setNome(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
    setSalario(salario);
}

double ContaEspecial::definirLimite()
{
    limite = salario*4;
    return limite;
}