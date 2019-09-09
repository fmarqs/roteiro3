#include <iostream>
#include <string>
#include "Conta.h"

using namespace std;

Conta::Conta()
{

}

Conta::Conta(string nomeCliente, double salarioMensal, string numeroConta, double saldo)
{
    setNome(nomeCliente);
    setSalario(salarioMensal);
    setNumero(numeroConta);
    setSaldo(saldo);
}

void Conta::definirLimite()
{
    limite = salarioMensal*2;
}

std::string Conta::getNome()
{
    return nomeCliente;
}

std::string Conta::getNumero()
{
    return numeroConta;
}

double Conta::getSalario()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}

void Conta::setNome(std::string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

void Conta::setNumero(std::string numeroConta)
{
    this->numeroConta = numeroConta;
}

void Conta::setSalario(double salarioMensal)
{
    this->salarioMensal = salarioMensal;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

void Conta::setLimite(double limite)
{
    this->limite = limite;
}

void Conta::sacar(double valor)
{
    if(valor < saldo)
    {
        SaldoNaoDisponivelException snde;
        throw snde;
    }else
    {
    cout << "\nSacou " << valor << endl;
    saldo -= valor;
    }
}

void Conta::depositar(double valor)
{
    cout << "\nDepositou " << valor << endl;
    saldo += valor;
}