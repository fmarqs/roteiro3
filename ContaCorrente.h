#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <iostream>
#include "Conta.h"

class ContaCorrente: public Conta
{
    protected:
        int limite;
        double salario;

    public:
        ContaCorrente();
        ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario);
        void setSalario(double salario);

        double getSalario();
        int getLimite();
        double definirLimite();

};

#endif