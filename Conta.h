#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"

#include <iostream>

class Conta: public IConta
{ 
    protected:
        std::string nomeCliente;
        int numero;
        double saldo;

    public:
        Conta();
        Conta(std::string nomeCliente, int numero, double saldo);
        void setNome(std::string nomeCliente);
        void setNumero(int numero);
        void setSaldo(double saldo);

        std::string getNome();
        int getNumero();
        double getSaldo();

        void sacar(double valor);
        void depositar(double valor);
};

#endif