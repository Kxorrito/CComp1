#include <iostream>
#include <string>
using namespace std;
bool calcular(int num, int n) {
    if (n == 0) {
        return true;
    }
    return (num % n != 0) ? false : calcular(num,n-1);
}

int main() {
    int num = 20;
    int resultado = num;
    while (!calcular(resultado, num)) {
        resultado += num;
    }
    std::cout << resultado << '\n';
}