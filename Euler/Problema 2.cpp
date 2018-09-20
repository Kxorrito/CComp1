#include <iostream>
#include <string>
using namespace std;
int main()
{
     int a = 1, b = 2, fib = 0, resp = 2;
     while (a+b < 4000000){
          fib = a+b;
          if (fib % 2 == 0) {resp += fib;}
          a = b;
          b = fib;
     }
     cout << endl << "la suma fibonacci es:  " << resp << endl;
     return 0;
}