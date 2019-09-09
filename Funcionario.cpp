#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario()
{

}

string Funcionario::getNome()
{
    return nome;
}

string Funcionario::getMatricula()
{
    return matricula;
}

void Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}

void Funcionario::setMatricula(std::string matricula)
{
    this->matricula = matricula;
}