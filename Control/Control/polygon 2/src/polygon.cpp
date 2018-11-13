#include "polygon.h"
#include <iostream>

using namespace std;

polygon::polygon(): width(1),height(1){}
polygon::polygon(int a,int b): width(a),height(b){}

int polygon::area(){
    return width*height;
}

void polygon::print(){
    cout<<width<<","<<height<<"\n";

}

