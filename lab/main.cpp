#include <iostream>

using namespace std;
/*
void swap_(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}

void swapByPtr(int *ptr0,int *ptr2){
    int temp = *ptr0;
    *ptr0= *ptr2;
    *ptr2= temp;
}

int main()
{
    int x=5, y=10;
    swapByPtr(&x , &y);
    cout<< x <<" "<< y <<endl;
    return 0;
}
*/

/*
int pow(int *b, int *e){
    int resultado=1;
    for(int i=0; i<*e;i++){
        resultado=resultado*(*b);
    }
    return resultado;

}
int main(){
    int z=9;
    int q=5;
    cout<<pow(&z,&q)<<endl;
    return 0;
}
*/

/*
int anio(int *a){
    if(*a % 4 == 0 && (*a % 100 != 0 || *a % 400 == 0)){
         cout<<"El anio "<<a<<" Si es bisiesto ";
     }else{
         cout<<"El anio "<<a<<" No es bisiesto ";
     }
     return 0;

}
int main()
{
    int z;
    cout<<"ingresar el anio: "<<endl;
    cin>>z;
    anio(&z);
    return 0;
}
*/

/*
bool anio(int *a){
    if(*a % 4 == 0 && (*a % 100 != 0 || *a % 400 == 0)){
         return true;
     }
     return false;
}

int main(){
    int z;
    cout<<"ingresar el anio: "<<endl;
    cin>>z;
    anio(&z);
    if(anio(&z)){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
*/

/*
int primo(int *n){
   int a=0,i;
         for(i=1;i<(*n+1);i++){
         if(*n%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }
            else{
                cout<<"Si es Primo";
         }
    return 0;
}
int main(){
    int x;
    cout<<"ingresar numero: ";
    cin>>x;
    primo(&x);
}
*/
bool Perfecto(int *x){
	int suma=0;

	for(int i=1;i<*x;i++){
		if((*x%i)==0){
			suma+=i;
		}
	}
	if(suma==*x){
		return true;
	}
    else{
        return false;
    }
}

int main()
{
    int x=6;
	cout<<Perfecto(&x);
}
