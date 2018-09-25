#include <iostream>

using namespace std;

int contadorCaracter(char cadena[],char a){
    int contador;
    for(int i=0; cadena[i]!='\0';i++){
        if(cadena[i]=a){
            contador=contador+1;
        }
    }
    return contador;
}

int main()
{
    cout << "la respuesta es: "<<contadorCaracter<< endl;

}
