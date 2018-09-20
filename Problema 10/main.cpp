#include <iostream>

using namespace std;

int main(){

 int n,a=2,cont,m=0,suma=0;
 cout<<"ingrese numero: ";
 cin>>n;

while (m<(n-1)){
 cont=0;
 for(int i=1; i<=a; i++){
  if(a%i==0){
   cont+=1;
  }
 }
 if(cont==2){
  suma=suma+a;
 }
 m+=1;
 a=a+1;
}
cout<<"la suma es "<<suma;
 return 0;
}
