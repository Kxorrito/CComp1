#include <iostream>

using namespace std;
/*
int suma(const int a[],const int lend){
    int resultado=0;
    for(int i=0; i<lend;i++){
        resultado+=a[i];
    }
    return resultado;
}
int main(){
    int a[]={4,5,7,15,20,25,26};
    int lend=7;
    cout<<suma(a,lend);
    return 0;
}
*/

/*
int menor(const int lista[],const int lend){
    int men=lista[0];
    for(int i=0;i<lend;i++){
        if(lista[i]<men){
            men=lista[i];
        }
    return men;
    }
}
int main(){
    int lista[]={4,6,2,7,10};
    int tam=5;
    cout<<menor(lista,5);
    return 0;
}
*/

/*
bool perfecto(int x){
	int suma=0;
	for(int i=1;i<x;i++){
		if((x%i)==0){
			suma+=i;
		}
	}

	if(suma==x){
		return true;
	}
    else{
        return false;
    }
}
int n_perfecto(int z[],int lend){
    int cant=0;
    for(int i=0;i<lend;i++){
        if(perfecto(z[i])==true){
            cant++;
        }
    }
    return cant;
}
int main(){
    int z[]={15,6,4,13,9};
    int tam=6;
    cout<<n_perfecto(z,5);
    return 0;

}
*/
int main(){
    cout<<true;
}
