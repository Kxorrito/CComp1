#include "Animal.h"
#ifndef GATO_H
#define GATO_H


class gato:public Animal
{
    public:
    gato(string p, int q):Animal(p,q){};
    void color(string);

};

#endif // GATO_H
