#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionario.h"

#include <vector>

class SistemaGerenciaFolha
{
    protected:
    std::vector<Funcionario*> funcionarios;

    public:
    SistemaGerenciaFolha();
    void setFuncionario(Funcionario *f);
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(int pos);
};

#endif