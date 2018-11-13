#include "animal.h"
#ifndef PERRO_H
#define PERRO_H


class perro:public animal
{
public:
    perro(string p, int q):animal(p,q){};
    void raza(string);
    void habla();
};

#endif // PERRO_H
