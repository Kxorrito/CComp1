#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;
class animal
{
protected:
    string nombre;
    int nroPatas;
public:
    animal (string n, int p):nombre(n),nroPatas(p){};
    virtual void habla()=0;
    void hacerHablar()
    {
        this->habla();
    }

};

#endif // ANIMAL_H
