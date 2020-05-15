#include <iostream>

using namespace std;

double max(double a, double b)
{
	double k;
	if (a > b)
	{
		k = a;
	}
	else
	{
		k = b;
	}
	return k;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double x, y;
	cout << "Введите X: ";
	cin >> x;
	cout << "Введите Y: ";
	cin >> y;

	double t = ((max(x, y) - max(x * y, x - y)) / (1.5 + max(x * x, y * y)));
	cout << "T = " << t << "\n";

	system("pause");

	return 0;
}
