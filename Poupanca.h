#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca: public Conta
{
    private:
        int variacao;
        double taxaRendimento;

    public:
        Poupanca();
        Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento);
        void setTaxa(double taxaRendimento);
        void setVariacao(int variacao);

        double getTaxa();
        int getVariacao();

        double render();
};

#endif