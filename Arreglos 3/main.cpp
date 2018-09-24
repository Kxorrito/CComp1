#include <iostream>

using namespace std;
void invertir(int lista[],int tam){
    int x=tam-1,a;
    for(int i=0;i<(tam/2);i++){
        a=lista[i];
        lista[i]=lista[x];
        lista[x]=a;
        x-=1;
    }
}
int main()
{
    int arreglo[]={1,2,3,4,5},tam=5;
    invertir(arreglo,5);
    for(int i=0;i<tam;i++){
        cout<<arreglo[i];
    }
    return 0;
}
