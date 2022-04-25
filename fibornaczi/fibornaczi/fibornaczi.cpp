#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    bool b;
    int c = 0;
    int i = 0;
    int d = 1;
    int e = 0;
    do
    {
        cout << "podaj liczbę fibonacci: \n";
        cin >> a;
        if (a > 0)
        {
            b = true;
        }
        else
        {
            b = false;
            cout << "zle \n";
        }
    } while (b == false);

    for (i; i < a; i++)
    {
        cout << c << ", ";
        e = c;
        c = c + d;
        d = e;
    }
}