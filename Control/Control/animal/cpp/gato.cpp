#include "gato.h"
#include <iostream>

using namespace std;

void gato::color(string x)
{
    cout<<"el color del gato es:"<<x<<"\n";
}

void gato::habla()
{
        cout<<"su nombre es: "<<nombre<<"\n";
        cout<<"tiene "<<nroPatas<<" patas\n";
        cout<<"no habla\n";
}
