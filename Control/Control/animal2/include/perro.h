#include "Animal.h"
#ifndef PERRO_H
#define PERRO_H


class perro:public Animal
{
public:
    perro(string p, int q):Animal(p,q){};
    void raza(string);

};

#endif // PERRO_H
