#include <iostream>
#include <string>
using namespace std;
int main()
{
	long int num=600851475143;
	int distancia=0;
	
	for( int i=2; num!=1; ++i)
	{
		while( num%i==0)
		{
			num/=i;
			distancia=i;
		}
	}	
	
	cout<<"el numero requerido es: "<<distancia;
	
	return 0;
}