#include <iostream>

using namespace std;
bool palindromo(char a[]){
    int lend=0;
    for(int i=0;a[i]!='\0';i++){
        lend++;
    }
    int iguales=0,c=lend/2;
    for(int i=0;i<=(lend/2);i++){
        if(a[i]==a[lend-1]){
            iguales++;
        }
    }
    if(iguales==c)
        return true;
    return false;
}

int main()
{
    char pal[]="oso";
    if(palindromo(pal)==true)
        cout<<"si"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
