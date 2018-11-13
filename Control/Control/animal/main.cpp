#include "animal.h"
#include "perro.h"
#include "gato.h"
#include "loro.h"
#include <iostream>


using namespace std;

int main()
{

    perro p("dogo",4);
    p.raza("pastor");
    p.habla();

    gato g("michi", 4);
    g.color("gris");
    g.habla();

    loro l("einstein",2);
    l.color("amarillo");
    l.habla();

    perro *ptr=&p;
    gato *ptr1=&g;
    loro *ptr2=&l;

    ptr->habla();
    ptr1->habla();
    ptr2->habla();

}
