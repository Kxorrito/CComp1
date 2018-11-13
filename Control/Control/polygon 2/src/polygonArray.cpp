#include "polygonArray.h"
#include "polygon.h"
#include <iostream>


polygonArray::polygonArray(){
    this->size=0;
    polygonos=new polygon[size];
}


polygonArray::polygonArray( polygon pts[], int size){
    this->size=size;
    polygonos=new polygon[size];
    for(int y=0;y<size;y++)
        polygonos[y]=pts[y];
}


polygonArray::polygonArray(polygonArray &o){
    this->size=o.size;
    polygonos=new polygon[size];
    for(int y=0;y<size;y++)
        polygonos[y]=o.polygonos[y];
}


polygonArray::~polygonArray(){
    delete[] polygonos;
}

void polygonArray::clear(){
    resize(0);
}

void polygonArray::push_back( polygon &p){
    resize(size+1);
    polygonos[size-1]=p;
}



void polygonArray::insert(int pos, polygon &p){
    resize(size+1);
    for(int y=size-1;pos-1<y;y--)
        polygonos[y]=polygonos[y-1];
    polygonos[pos-1]=p;
}



void polygonArray::remove(int pos){
    for(int y=pos;y<size-1;y++)
        polygonos[y-1]=polygonos[y];
    size--;
    resize(size);
}

//private
void polygonArray::resize(int newsize){
    polygon *ptr=new polygon[newsize];
    int minsize=(newsize<size)?size:newsize;
    for(int y=0;y<minsize;y++)
        ptr[y]=polygonos[y];
    delete polygonos;
    size=newsize;
    polygonos=ptr;
}


void polygonArray::printPolygon(){
    for(int y=0;y<size;y++)
        //std::cout<<polygonos[y].area()<<std::endl;
        polygonos[y].print();
}





