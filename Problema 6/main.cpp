#include <iostream>

using namespace std;

int main()
{
	int cuadradoSum = 0;
	int sum = 0;

	for (int i = 1; i <= 100; ++i)
	{
		sum += i;
		cuadradoSum += (i * i);
	}

	sum *= sum;
	cout << sum - cuadradoSum;
	return 0;
}
