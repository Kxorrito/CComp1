#include <iostream>

using namespace std;
/*
int suma(int *arr,int tam){
        int res=0;
        for(int i=0;i<tam;i++)
            res+=*(arr+i);
        return res;

}
*/

/*
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

bool palindrome(int *arr,int tam){
    int *fin=arr+tam-1;
    while(fin>arr){
            if(*fin-- != *arr++)
                return false;
    }
    return true;

}
*/
int str_len(char *cad){
    int res=0;
    while(*cad++ != '\0'){
        res++;
    }
    return res;
}

void str_cpy(char *cad1, char *cad2){
    int i=0;
    while(cad1[i] !='\0'){
        cad2[i]=cad1[i];
        i++;
    }
}

int main(){
    char cadena[]= "ciencia";
    //char cadena2[20];
    cout<<str_len(cadena)<<endl;
    //str_cpy(cadena1, cadena2);
    //cout<<cadena2<<endl;
}

/*
int main()
{
    int arr[]={4,2,10,30,20};
    int *ptr=arr;
    invertir(arr,5);
    imprimir(arr,5);
    return 0;
}
*/
