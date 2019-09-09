#ifndef COMISSIONARIO_H
#define COMISSIONARIO_H
#include "Funcionario.h"
#include "Assalariado.h"

#include <iostream>

class Comissionario: virtual public Funcionario
{
    private:
    double vendasSemanais, percentualComissao, base;
    double salarioMensal;

    public:
    Comissionario();
    double calculaSalario();

    double getVendas();
    double getPercentual();
    double getBase();
    double getSalarioMensal();

    void setSalarioMensal(double salarioMensal);
    void setVendas(double vendasSemanais);
    void setPercentual(double percentualComissao);
    void setBase(double base);
};

#endif 