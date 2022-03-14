#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "ile liczb pierwszych mam wyswietlic?" << endl;
    cin >> n;
    int p = 2;
    cout << "Liczby pierwsze:" << endl;
    for (int c = 0; c < n; c)
    {
        bool pier = true;
        for (int i = 2; i <= p / 2; i++)
        {
            if (p % i == 0)
            {
                pier = false;
                break;
            }
        }
        if (pier == true)
        {
            cout << p << endl;
            c++;
        }
        p++;

    }
}

/* potrafi opisać teoretyczne działanie algorytmu
- zna składnie języka C++ i wymienia jej mechanizmy
- potrafi stworzyć schemat blokowy oraz pseudokod na podstawie opisywanego algorytmu
- analizuje, modeluje i rozwiązuje sytuacje problemowe z różnych dziedzin
3 (dst) Spełnia kryteria oceny dopuszczającej oraz:
- opisuje własności algorytmu na podstawie ich analizy
- stosuje podejście algorytmiczne do rozwiązania problemu
- zna podstawowe mechanizmy działania języka C++ i umie je opisać
- dobiera efektywny algorytm do rozwiązania sytuacji problemowej
- ocenia zgodność algorytmu z specyfikacją problemu
4 (db) Spełnia kryteria oceny dostatecznej oraz:
- implementacja rozwiązań problemów algorytmicznych w wybranej notacji (C++, schemat
blokowy, pseudokod)
- potrafi zastosować podstawowe mechanizmy języka C++ w celu rozwiązania danego
problemu
- wykorzystuje platformę GitHub do zapisywania programów
5 (bd) Spełnia kryteria oceny dobrej oraz:
- bez problemu potrafi zaimplementować algorytm
- bada efektywność komputerowych rozwiązań problemów
- dobiera odpowiednie struktury danych do realizacji algorytmu
- oblicza liczbę operacji wykonywanych przez algorytm
6 (cel) Spełnia kryteria oceny bardzo dobrej oraz:
- dobiera najlepsze rozwiązanie algorytmu i odpowiednie struktury danych do rozwiązania
postawionego problemu
- dokumentuje swoją pracę, wykorzystując platformę GitHub*/

