#include <iostream>

using namespace std;


  int main (){

  int a = 1, b = 0,c; // iniciamos en 1 y 0 porque son los anteriores numeros
  float d;
  std::cout << "escribe un numero " << '\n';
  std::cin >> c;

  d=(float (c)/2);


  while (d>0){
  d--;
  a=a+b;
  b=a+b;

  cout<<a<<endl;
  cout<<b<<endl;
  }
  cout<<"la serie fibonacci de"<<c<<endl;





  return 0;
  }