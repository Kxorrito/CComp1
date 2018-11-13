#include "Animal.h"
#ifndef LORO_H
#define LORO_H


class loro:public Animal
{
   public:
    loro(string p, int q):Animal(p,q){};

    void color(string);

};

#endif // LORO_H
