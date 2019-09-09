#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial: public Conta
{
    public:
    ContaEspecial(std::string nomeCliente, double salarioMensal, std::string numeroCliente, double saldo);
    void definirLimite();

};

#endif 