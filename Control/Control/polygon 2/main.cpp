#include <iostream>
#include "polygon.h"
#include "polygonArray.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;


int main()
{
    rectangle p(1,10);
    triangle q(2,20);
    rectangle r(3,30);
    rectangle s(4,40);
    triangle t(5,50);


    polygon arr[]={p,q,r,s,t};
    int size=sizeof(arr)/sizeof(arr[0]);

    polygonArray pa2(arr,size);
    polygonArray pa=pa2;


    pa.push_back(p);
    pa.printPolygon();
    cout<<"\n";

    pa.insert(3,t);
    pa.printPolygon();
    cout<<"\n";

    pa.remove(4);
    pa.printPolygon();




}
