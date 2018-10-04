#include <iostream>

using namespace std;
/*
void intercambio(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=5;
    int b=10;
    cout<<a<<" "<<b<<endl;
    intercambio(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;

}
*/

void intercambio(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void print(const long long &n){
    cout<<n<<endl;
}
bool ispotde2(int n){
    return !(n&(n-1));
}
int fibonacci(int n){
    if(n==0||n==1)
        return 1;
    else
        return fibonacci(n-2)+fibonacci(n-1);
}
int factorial(int n){

}
int main(){
    cout<<fibonacci(13);
    return 0;

}


