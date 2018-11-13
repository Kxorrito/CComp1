#include <iostream>
#include "Animal.h"
#include "perro.h"
#include "gato.h"
#include "loro.h"

#include "animalArray.h"

using namespace std;

int main()
{
    perro p("dogo",4);
    gato c("michi",4);
    loro l("einstein",2);
    Animal arr[]={p,c,l};
    int size=sizeof(arr)/sizeof(arr[0]);

    animalArray p2(arr,size);
    animalArray pp=p2;

    pp.habla();
    cout<<"\n";

    cout<<"push back" <<"\n";
    pp.push_back(c);
    pp.habla();
    cout<<"\n";

    cout<<"removiendo elementos"<<"\n";
    pp.remove(4);
    pp.habla();
    cout<<"\n";

    cout<<"insertar elemento" <<"\n";
    pp.insert(1,c);
    pp.habla();
    cout<<"\n";

    cout<<"removiendo elementos"<<"\n";
    pp.remove(2);
    pp.habla();
    cout<<"\n";

    pp.clear();
    pp.habla();


    return 0;
}
