#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H
#include "Animal.h"

#include <iostream>

using namespace std;

class animalArray
{
    public:
        animalArray();
        animalArray(const Animal pts[], const int size);
        animalArray(animalArray &p);
        ~animalArray();

        void habla();
        int getSize();
        void push_back(const Animal &p);
        void insert(const int , const Animal &p);
        void remove(const int);
        void clear();

    private:
        int size;
        Animal *animals;
        void resize(int resize);
};

#endif // ANIMALARRAY_H
