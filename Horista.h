#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"
#include <iostream>

class Horista: virtual public Funcionario
{
    private:
    double salarioPorHora, horasTrabalhadas, salarioMensal;

    public:
    Horista();
    double calculaSalario();

    double getSalarioMensal();
    double getSalarioPorHora();
    double getHoras();

    void setSalarioMensal(double salarioMensal);
    void setSalarioPorHora(double salarioPorHora);
    void setHoras(double horasTrabalhadas);


};

#endif 