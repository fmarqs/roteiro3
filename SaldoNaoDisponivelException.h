#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <iostream>
#include <exception>

class SaldoNaoDisponivelException: public std::exception
{
    public:
    const char* saldoNaoDisponivel();

};

#endif