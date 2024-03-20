#include<iostream>
#include<iomanip>
using namespace std;

double f2(double x)
{
	return x * x + x + 2;
}

double Pole2(int a, int b, int n)
{
	double h = (b - a) / (double)n;
	double S = 0.0;
	double podstawa_a = f2(a), podstawa_b;

	for (int i = 1; i <= n; i++)
	{
		podstawa_b = f2(a + h * i);
		S += (podstawa_a + podstawa_b);
		podstawa_a = podstawa_b;
	}
	return S * 0.5 * h;
}

int prog()
{
	int a, b, n;
	cout << "Podaj przedzia³ [a, b]\na = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Podaj liczbê trapezów: ";
	cin >> n;

	if (!(a < b))
		cout << "To nie jest przedzia³!";
	else
		cout << "Pole figury wynosi: " << fixed << setprecision(2) << Pole2(a, b, n);

	return 0;
}