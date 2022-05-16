#include <iostream>
using namespace std;
int funkcja(int sz, int tab[]);
#include <chrono>
using namespace std::chrono;

int funkcja(int sz, int tab[])
{
    int l;
    int p;
    int sr;
    l = 0;
    p = 15;
    sr = (l + p) / 2;
    while (l <= p)
    {
        if (tab[sr] == sz)
        {
            return sr;
        }
        else if (tab[sr] > sz)
        {
            p = sr - 1;
        }
        else if (tab[sr] < sz)
        {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return -1;
}

int main()
{
    int sz = 0;
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

    cout << "wprowadz liczbe ktora szukasz \n";
    for (int i = 0; i < 15; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n";
    cin >> sz;
    auto start = high_resolution_clock::now();
    if (funkcja(sz, tab) == -1)
    {
        cout << "nie znaleziono";
    }
    else
    {
        cout << "znajduje sie w indeksie " << funkcja(sz, tab) << "\n";
        cout << "znajduje sie na miejscu " << funkcja(sz, tab) + 1 << "\n";
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n ilosc milisekund do wykonania zadania - ";
    cout << duration.count() << endl;

}