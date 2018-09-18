#include <iostream>

using namespace std;


bool Perfecto(int x){
	int suma=0;

	for(int i=1;i<x;i++){
		if((x%i)==0){
			suma+=i;
		}
	}

	if(suma==x)
		return true;

	return false;
}



int main()
{
    int x=6;
	if(Perfecto(x)==true)
		cout<<x<<" es un numero perfecto"<<endl;
	else
		cout<<x<<" no es un numero perfecto"<<endl;
	cout<<'\n';

	for(int j=5;j<=10000;j++){
		if(Perfecto(j)==true){
			cout<<"divisores de "<<j<<": ";
			for(int i=1;i<j;i++){
				if((j%i)==0){
					cout<<i<<",";
				}
			}
		cout<<'\n';
		}
	}
	cout<<'\n';
}
