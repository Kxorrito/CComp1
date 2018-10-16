#include <iostream>

using namespace std;
void imprimir(int *arr,int tam){
    if(tam==0)
        return;
    cout<<*arr++<<" ";
    imprimir(arr,--tam);
}

void invertir(int *arr,int tam){
    int *fin=arr+tam-1;
    while(fin>arr){
            int temp=*arr;
            *arr ++ =*fin;
            *fin -- =temp;
    }


}
int main (){
    int arreglo[]={6,2,8,1,5};
    int *ptr=arreglo;
    invertir(arreglo,5);
    imprimir(arreglo,5);
    return 0;
}
