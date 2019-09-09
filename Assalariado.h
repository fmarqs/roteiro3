#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

#include <iostream>

class Assalariado: virtual public Funcionario
{
    private:
    double salario;

    public:
    Assalariado();
    double calculaSalario();

    double getSalario();
    void setSalario(double salario);

};

#endif