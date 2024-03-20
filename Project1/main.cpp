#include<iostream>
#include<iomanip>
using namespace std;

double f(double x)
{
    //funkcja zawsze przyjmuje wartosci dodatnie
    //wi�c mo�na pomin�� wartos� bezwzgl�dn�
    return x * x + x + 2;
}

double Pole(int a, int b, int n)
{
    double x = (b - a) / (double)n; //pierwszy bok - ka�dy prostok�t ma taki sam
    double S = 0.0; //zmienna b�dzie przechowywa� sum� p�l trapez�w
    double srodek = a + (b - a) / (2.0 * n); //�rodek pierwszego boku

    for (int i = 0; i < n; i++)
    {
        S += f(srodek); //obliczenie wysoko�ci prostok�ta
        srodek += x; //przej�cie do nast�pnego �rodka    
    }
    return S * x;
}

int main()
{


    int a, b, n;
    cout << "Podaj przedzia� [a, b]\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Podaj liczb� trapez�w: ";
    cin >> n;

    if (!(a < b))
        cout << "To nie jest przedzia�!";
    else
        cout << "Pole figury wynosi: " << fixed << setprecision(2) << Pole(a, b, n);
    return 0;
}