#include "Conta.h"
#include "ContaEspecial.h"
#include "Poupanca.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ContaCorrente *cc = new ContaCorrente("Maria", 494833, 0, 500);
    ContaEspecial *ce = new ContaEspecial("Jose", 933893, 0, 1000);
    Poupanca *p = new Poupanca("Fernando", 3232487, 0, 1, 9.5);
    Poupanca *p2 = new Poupanca("Fernanda", 43829, 0, 51, 9.5);

    cc->definirLimite();
    ce->definirLimite();

    cout << "Conta #1: " << cc->getNome() << "\nNumero da conta: " << cc->getNumero() << "\nSalario: " << cc->getSalario()
    << "\nSaldo: " << cc->getSaldo() << "\nLimite: " << cc->getLimite() << endl;

    cout << "\nConta #2: " << ce->getNome() << "\nNumero da conta: " << ce->getNumero() << "\nSalario: " << ce->getSalario()
    << "\nSaldo: " << ce->getSaldo() << "\nLimite: " << ce->getLimite() << endl;

    ce->sacar(1000);

    cc->depositar(1000);
    ce->depositar(2000);

    cout << "\nConta #1: " << "\nNovo Saldo: " << cc->getSaldo();
    cout << "\nConta #2: " << "\nNovo Saldo: " << ce->getSaldo() << endl;

    cout << "\nPoupanca #1: " << p->getNome() << "\nNumero da conta: " << p->getNumero() << "\nRendimento: " << p->render()
    << "%" << endl;

    cout << "\nPoupanca #2: " << p2->getNome() << "\nNumero da conta: " << p2->getNumero() << "\nRendimento: " 
    << p2->render() << "%" << endl;

    

    delete cc;
    delete ce;
    delete p;
    delete p2;


}