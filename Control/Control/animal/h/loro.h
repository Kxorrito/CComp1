#include "animal.h"
#ifndef LORO_H
#define LORO_H


class loro:public animal
{
   public:
    loro(string p, int q):animal(p,q){};

    void color(string);
    void habla();
};

#endif // LORO_H
