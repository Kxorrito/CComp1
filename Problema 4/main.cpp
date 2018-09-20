#include <iostream>

using namespace std;

bool palindrome(int);
int main()
{
    int maximo=0;
    for(int i=100 ; i<1000;i++)
    {
        for(int j=100; j<1000 ;j++)
        {
            if(palindrome(i*j)==true)
            {
                if(i*j>=maximo)
                    maximo=i*j;
            }
        }
    }
    cout<<maximo;
}

bool palindrome(int p)
{
    int n=p;
    int rev=0;

    for( ;n>0;n=n/10)
    {
        rev= rev*10 + (n%10);
    }
    if(rev==p)
        return true;
    else
        return false;
}
