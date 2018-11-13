#include "animal.h"
#ifndef GATO_H
#define GATO_H


class gato:public animal
{
    public:
    gato(string p, int q):animal(p,q){};

    void color(string);
    void habla();
};

#endif // GATO_H
