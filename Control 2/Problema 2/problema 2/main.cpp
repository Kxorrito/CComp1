#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"ingresar numero: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
            cout<<i<<" ; "<<endl;
        }
    }
    return 0;
}
