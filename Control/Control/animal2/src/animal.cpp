#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(string n, int p)
{
    nombre=n;
    nroPatas=p;
}

void Animal::habla(void)
{
    cout<< nombre << " " <<nroPatas<<"\n";
}

Animal::Animal()
{
}
