#include "Animal.h"
#include "Cachorro.h"
#include "Passaro.h"

using namespace std;

int main()
{
    Animal *a = new Cachorro();
    Animal *a1 = new Passaro();

    a->setTipo("Domestico");
    a1->setTipo("Selvagem");

    cout << a->getTipo() << endl;
    a->fazerRuido();

    cout << a1->getTipo() << endl;
    a1->fazerRuido();

    delete a;
    delete a1;
}