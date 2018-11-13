#include "polygon.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class triangle:public polygon
{
    public:

        triangle(int a, int b):polygon(a,b){};

        //void areas();
        int area();

};

#endif // TRIANGLE_H
