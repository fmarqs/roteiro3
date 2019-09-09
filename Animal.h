#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
    private:
        std::string tipo;

    public:
        Animal();
        virtual void fazerRuido() = 0;

        void setTipo(std::string tipo);

        std::string getTipo();
};

#endif