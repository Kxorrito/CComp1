
#include <iostream>
#include "Point.h"

#include "PointArray.h"


using namespace std;

struct USCurrency {
	int dollars;
	int cents;
	USCurrency operator+(const USCurrency o) {
		USCurrency tmp = { 0,0 };
		tmp.cents = cents + o.cents;
		tmp.dollars = dollars + o.dollars;
		if (tmp.cents >= 100) {
			tmp.dollars += 1;
			tmp.cents -= 100;
		}
		return tmp;
	}
};

USCurrency a = { 2,5 };
USCurrency b = { 1,75 };
USCurrency c = a + b;

struct PECurrency {
	int soles;
	int centimos;
};

PECurrency operator+(const PECurrency m, const PECurrency o) {
	PECurrency tmp = { 0,0 };
	tmp.centimos = m.centimos + o.centimos;
	tmp.soles = m.soles + o.soles;
	if (tmp.centimos >= 100) {
		tmp.soles += 1;
		tmp.centimos -= 100;
	}
	return tmp;
}

PECurrency d = { 2,5 };
PECurrency e = { 1,75 };
PECurrency f = d + e;

ostream& operator<<(ostream &output, const USCurrency &o) {
	output << "$" << o.dollars << "." << o.cents;
	return output;
}

ostream& operator<<(ostream &output, const PECurrency &o) {
	output << "S/." << o.soles << "." << o.centimos;
	return output;
}
/*
1. funcion que retorna punto (un elemento del arreglo)
2. crear un arreglo nuevo (vacio)
3. pushback al arreglo vacio (cada elemento que es retornado de la funcion que saca un elemento del arreglo)
4. retorna el arreglo nuevo (ya lleno)
*/


int main() {
	Point<int> alpha(1, 2);
	Point<int> beta(3, 4);
	Point<int> teta(5, 6);

	Point<int> a(7, 8);
	Point<int> b(9, 1);
	Point<int> c(11, 12);

	Point<int> arr[] = { alpha,beta,teta };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	Point<int> arr2[] = { a,b,c };
	int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

	PointArray<Point<int> >pa(arr, arrSize);
	PointArray<Point<int> >pa2(arr2, arr2Size);

	PointArray<Point<int> >pa3 = (pa + pa2);

	pa.print();
	/*Point<int> alpha(1, 2);
	Point<int> beta(3, 4);
	Point<int> teta(5, 6);

	Point<int> arr[] = { alpha,beta,teta };
	int size = sizeof(arr) / sizeof(arr[0]);

	PointArray<Point<int>>pa0(arr, size);
	PointArray<Point<int>>pa1 = pa0;

	cout << "Array Original:" << endl;
	pa1.print();
	cout << endl;

	Point<int> a(7, 8);
	Point<int> b(9, 1);
	Point<int> c(11, 12);

	cout << "Push Back:" << endl;
	pa1.push_back(a);
	pa1.print();
	cout << endl;

	cout << "Insertando..." << endl;
	pa1.insert(1, b);
	pa1.print();
	cout << endl;

	cout << "Removiendo..." << endl;
	pa1.remove(2);
	pa1.print();
	cout << endl;

	cout << "Eliminando..." << endl;
	pa1.clear();
	cout << endl;

	cout << "Tamaño del arreglo: " << pa1.getSize() << endl;

	return 0;
	*/

}
