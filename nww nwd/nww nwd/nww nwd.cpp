#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    int b = 0;
    cout << "Podaj dwie liczby\n";
    cin >> a >> b;
    int iloczyn = a * b;
    while (a != b)
    {
        if (a <= b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    float nww = iloczyn / a;
    cout << "Najwieszkszy wspolny dzielnik = " << a << endl;
    cout << "Najmniejsza wspojna wielokrotnosc = " << nww;
}