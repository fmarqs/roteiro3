#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include "IConta.h"
#include "SaldoNaoDisponivelException.h"

class Conta: public IConta
{
    protected:
        std::string nomeCliente, numeroConta;
        double saldo, salarioMensal, limite;

    public:
        Conta();
        Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo);
        void definirLimite();
        void sacar(double valor);
        void depositar(double valor);

        std::string getNome();
        std::string getNumero();
        double getSalario();
        double getSaldo();
        double getLimite();

        void setNome(std::string nomeCliente);
        void setNumero(std::string numeroConta);
        void setSaldo(double saldo);
        void setSalario(double salario);
        void setLimite(double limite);


};

#endif