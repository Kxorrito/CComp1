#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include <iostream>
#include "polygon.h"


class polygonArray
{

   public:
    polygonArray();
    polygonArray(polygon pts[],int size);
    polygonArray(polygonArray &o);
    ~polygonArray();

    void printPolygon();
    void clear();
    void insert(int,polygon &p);
    void push_back(polygon &p);
    void remove(int);

   private:
    int size;
    polygon *polygonos;
    void resize(int);
};

#endif // POLYGONARRAY_H
