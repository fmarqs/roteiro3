#include "Animal.h"

using namespace std;

Animal::Animal()
{
}

void Animal::setTipo(string tipo)
{
    this->tipo = tipo;
}

string Animal::getTipo()
{
    return tipo;
}


