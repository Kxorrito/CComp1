#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"ingresar numero  :";
    cin>>n;
    for(int j=2;j<=n;j++)
        {
            int a=0;
        for(int i=1;i<=j;i++){
         if(j%i==0){
             a++;
            }
         }
         if(a==2)
            {
              cout<<j<<'\t';
            }
        }
    return 0;


}
