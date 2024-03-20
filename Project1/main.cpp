#include<iostream>
#include<iomanip>
using namespace std;

double f(double x)
{
    //funkcja zawsze przyjmuje wartosci dodatnie
    //wiêc mo¿na pomin¹æ wartosæ bezwzglêdn¹
    return x * x + x + 2;
}

double Pole(int a, int b, int n)
{
    double x = (b - a) / (double)n; //pierwszy bok - ka¿dy prostok¹t ma taki sam
    double S = 0.0; //zmienna bêdzie przechowywaæ sumê pól trapezów
    double srodek = a + (b - a) / (2.0 * n); //œrodek pierwszego boku

    for (int i = 0; i < n; i++)
    {
        S += f(srodek); //obliczenie wysokoœci prostok¹ta
        srodek += x; //przejœcie do nastêpnego œrodka    
    }
    return S * x;
}

int main()
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
        cout << "Pole figury wynosi: " << fixed << setprecision(2) << Pole(a, b, n);
    return 0;
}