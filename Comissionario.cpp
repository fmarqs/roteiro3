#include "Comissionario.h"
#include <string>

using namespace std;

Comissionario::Comissionario()
{
}

double Comissionario::getVendas()
{
    return vendasSemanais;
}

double Comissionario::getPercentual()
{
    return percentualComissao;
}

double Comissionario::getBase()
{
    return base;
}

double Comissionario::getSalarioMensal()
{
    return salarioMensal;
}

void Comissionario::setVendas(double vendasSemanais)
{
    this->vendasSemanais = vendasSemanais;
}

void Comissionario::setPercentual(double percentualComissao)
{
    this->percentualComissao = percentualComissao/100;
}

void Comissionario::setBase(double base)
{
    this->base = base;
}

void Comissionario::setSalarioMensal(double salarioMensal)
{
    this->salarioMensal = salarioMensal;
}

double Comissionario::calculaSalario()
{
    double valorDasVendas;
    valorDasVendas = vendasSemanais*500; //aqui foi declarado um valor padrao para todas as vendas (500 reais)
    cout << "\nSalario semanal: " << base+(percentualComissao*valorDasVendas);
    cout << "\nSalario mensal: " << (base+(percentualComissao*valorDasVendas))*4 << endl;
    setSalarioMensal((base+(percentualComissao*valorDasVendas))*4);
}