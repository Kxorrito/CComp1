#include <iostream>

using namespace std;

int main()
{

      int a;
      cout<<"Ingresa anio"<<endl;
      cin>>a;
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         cout<<"El anio "<<a<<" Si es bisiesto ";
     }else{
         cout<<"El anio "<<a<<" No es bisiesto ";
     }
}
