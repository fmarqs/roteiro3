#include <iostream>
#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, string numeroConta, double saldo)
{
    setNome(nomeCliente);
    setSalario(salarioMensal);
    setNumero(numeroConta);
    setSaldo(saldo);
}

void ContaEspecial::definirLimite()
{
    limite = salarioMensal*3;
}