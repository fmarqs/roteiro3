#include "Poupanca.h"

using namespace std;

Poupanca::Poupanca()
{

}

Poupanca::Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento)
{
    setNome(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
    setVariacao(variacao);
    setTaxa(taxaRendimento);
}

void Poupanca::setVariacao(int variacao)
{
    this->variacao = variacao;
}

void Poupanca::setTaxa(double taxaRendimento)
{
    this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao()
{
    return variacao;
}

double Poupanca::getTaxa()
{
    return taxaRendimento;
}

double Poupanca::render()
{
    if(variacao == 51)
    {
        return taxaRendimento;
    }
    else if(variacao == 1)
        return taxaRendimento+0.5;
}
