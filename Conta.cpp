#include <iostream>
#include <string>
#include "Conta.h"

using namespace std;

Conta::Conta()
{}

Conta::Conta(string nomeCliente, int numero, double saldo)
{
    setNome(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
}

std::string Conta::getNome()
{
    return nomeCliente;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::setNome(std::string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

void Conta::setNumero(int numero)
{
    this->numero = numero;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

void Conta::sacar(double valor)
{
    if(valor > saldo)
    cout << "\nSaldo insuficiente" << endl;
    else
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