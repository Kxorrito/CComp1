#include "animalArray.h"
#include <iostream>
#include "Animal.h"

using namespace std;

animalArray::animalArray()
{
    this->size=0;
    this->animals=new Animal[size];
}

animalArray::animalArray(const Animal pts[], const int size)
{
    this->size=size;
    this->animals=new Animal[size];
    for(int i=0; i<size ; i++){
        animals[i]=pts[i];
    }
}

animalArray::animalArray(animalArray &p)
{
    this->size=p.size;
    this->animals=new Animal[p.size];
    for(int i=0; i<size ; i++){
        animals[i]=p.animals[i];
    }
}

void animalArray::habla()
{
    for(int i=0; i<size ; i++){
        animals[i].habla();
    }
}

int animalArray::getSize()
{
    return size;
}

void animalArray::resize(int newSize)
{
    Animal *pts = new Animal[newSize];
    int minsize = (newSize > size) ? size : newSize;
    for(int i=0; i<minsize ; i++)
        pts[i] = animals[i];

    delete[] animals;

    size = newSize;
    animals = pts;

}

void animalArray::insert(const int pos, const Animal &p)
{
    resize(size+1);
    for(int i= size-1; i>pos ; i--){
        animals[i]=animals[i-1];
    }
    animals[pos]=p;

}

void animalArray::push_back(const Animal &p)
{
    resize(size+1);
    animals[size-1]=p;
}

void animalArray::remove(const int pos)
{
    for(int i=pos; i<size-1 ; i++)
        animals[i]=animals[i+1];
    resize(size-1);
}

void animalArray::clear()
{
    resize(0);
}

animalArray::~animalArray()
{
    delete[] animals;
}
