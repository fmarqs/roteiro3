#include "Conta.h"
#include "ContaEspecial.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Conta *c = new Conta("Maria", 1900, "2989328-13", 500);
    ContaEspecial *ce = new ContaEspecial("Jose", 1500, "92318932-01", 1000);

    c->definirLimite();
    ce->definirLimite();

    cout << "Conta #1: " << c->getNome() << "\nNumero da conta: " << c->getNumero() << "\nSalario: " << c->getSalario()
    << "\nSaldo: " << c->getSaldo() << "\nLimite: " << c->getLimite() << endl;

    cout << "\nConta #2: " << ce->getNome() << "\nNumero da conta: " << ce->getNumero() << "\nSalario: " << ce->getSalario()
    << "\nSaldo: " << ce->getSaldo() << "\nLimite: " << ce->getLimite() << endl;

    try
    {
    c->sacar(500);
    }
    catch(SaldoNaoDisponivelException snde)
    {
        cout << snde.what() << endl;
    }
    
    try
    {
        c->sacar(500);
    }
    catch(SaldoNaoDisponivelException snde2)
    {
        cout << snde2.what() << endl;
    }
    ce->sacar(1000);

    c->depositar(1000);
    ce->depositar(2000);

    cout << "\nConta #1: " << "\nNovo Saldo: " << c->getSaldo();
    cout << "\nConta #2: " << "\nNovo Saldo: " << ce->getSaldo() << endl;


    

    delete c;
    delete ce;

}