#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
void Fun(int kl, char tab[], string sl);
void Fun(int kl, char tab[], string sl)
{
	int dl;
	dl = strlen(tab);
	if (!(kl >= -26 && kl <= 26))
	{
		cout << "zly klucz";

	}
	if (kl >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + kl <= 'z')
			{
				tab[i] += kl;
			}
			else
			{
				tab[i] = tab[i] + kl - 26;
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + kl >= 'a')
			{
				tab[i] += kl;
			}
			else
			{
				tab[i] = tab[i] + kl + 26;
			}
		}
	}
	cout << "przed zaszyfrowaniem " << sl << endl;
	cout << "po zaszyfrowaniu " << tab << endl;
}
int main()
{
	string sl;
	int kl;
	char tab[100];
	cout << "wyraz do zaszyfrowania" << endl;
	cin >> tab;
	sl = tab;
	cout << "podaj klucz z przedzialu od -26 do 26" << endl;
	cin >> kl;
	auto start = high_resolution_clock::now();
	Fun(kl, tab, sl);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "czas wykonania: " << duration.count() << " ms";
}