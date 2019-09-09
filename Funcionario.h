#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

class Funcionario
{
    protected:
    std::string nome, matricula;

    public:
    Funcionario();
    virtual double calculaSalario() = 0;

    std::string getNome();
    std::string getMatricula();

    void setNome(std::string nome);
    void setMatricula(std::string matricula);

};

#endif 