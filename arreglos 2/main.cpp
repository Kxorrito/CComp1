#include <iostream>

using namespace std;

    void ordenar_numeros(int arreglo[], int lon){
        int a;
         for(int i=0;i<lon;i++)
                for(int j=0;j<lon-1;j++)
                    if(arreglo[j]<arreglo[j+1]){
                        a=arreglo[j];
                        arreglo[j]=arreglo[j+1];
                        arreglo[j+1]=a;}

                 for(int i=0;i<lon;i++)
                    cout<<arreglo[i]<<endl;
                        }


    int main(){
        int lon,n;
        cout<<"Ingresa los numeros: ";
        cin>>lon;
        int arr[lon];
        for(int i=0;i<lon;i++){
            cout<<"Ingresa el numero "<<i+1<<": ";
            cin>>n;
            arr[i]=n;
            }
            cout<<endl<<"Numeros ordenados: "<<endl;
            ordenar_numeros(arr,lon);
        }

