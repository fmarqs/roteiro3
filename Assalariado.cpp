#include "Assalariado.h"

using namespace std;

Assalariado::Assalariado()
{
}

double Assalariado::getSalario()
{
    return salario;
}

void Assalariado::setSalario(double salario)
{
    this->salario = salario;
}

double Assalariado::calculaSalario()
{
    cout << "\nSalario mensal: " << salario << endl;
}