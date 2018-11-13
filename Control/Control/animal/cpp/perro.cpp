#include "perro.h"
#include <iostream>

using namespace std;

void perro::raza(string x)
{
    cout<<"su raza es: " <<x<<"\n";
}

void perro::habla()
{
        cout<<"es un perro \nsu nombre es: "<<nombre<<"\ntiene ";
        cout<<nroPatas<<" patas \n";
        cout<<"no habla\n";
}
