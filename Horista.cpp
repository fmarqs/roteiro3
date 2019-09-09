#include "Horista.h"
#include <string>

using namespace std;

Horista::Horista()
{

}

double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}

double Horista::getHoras()
{
    return horasTrabalhadas;
}

void Horista::setSalarioPorHora(double salarioPorHora)
{
    this->salarioPorHora = salarioPorHora;
}

void Horista::setHoras(double horasTrabalhadas)
{
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::getSalarioMensal()
{
    return salarioMensal;
}

void Horista::setSalarioMensal(double salarioMensal)
{
    this->salarioMensal = salarioMensal;
}

double Horista::calculaSalario()
{
    if(horasTrabalhadas == 40)
    {
        cout << "\nSalario semanal: " << salarioPorHora*horasTrabalhadas;
        cout << "\nSalario mensal: " << salarioPorHora*horasTrabalhadas*4 << endl;
    }
    else if(horasTrabalhadas > 40)
    {
        double horaExtra;
        horaExtra = horasTrabalhadas - 40;
        cout << "\nSalario semanal: " << salarioPorHora*horasTrabalhadas+(1.5*salarioPorHora*horaExtra);
        cout << "\nSalario mensal: " << (salarioPorHora*horasTrabalhadas+(1.5*salarioPorHora*horaExtra))*4 << endl;
        setSalarioMensal((salarioPorHora*horasTrabalhadas+(1.5*salarioPorHora*horaExtra))*4);
    }
}