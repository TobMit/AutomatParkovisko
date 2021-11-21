
#include <iostream>
using namespace std;
int main()
{
	/// <summary>
	/// Oznacovanie stavoj je pomocou cisel S0 = 0, S1 = 1....
	/// </summary>
	/// <returns></returns>
	int stav[4][4] = { {0,0,0,1},{1,2,0,1},{1,2,2,3,},{3,3,2,3} };

	int aktualnyStav = 0;
	while (true)
	{
		
		cout << "Vstup zadavat [a,b] pricom a,b budu iba 0,1" << "\n" << "Vstup moze vyzerat \"0,0\""<< "\nPre ukoncenie programu zadajte nieco ine \n";
		cout << "Zadajte vstup:   ";
		string vstup;
		cin >> vstup;

		if (vstup.compare("0,0") == 0)
		{
			aktualnyStav = stav[aktualnyStav][0];
			
		} else if (vstup.compare("1,0") == 0)
		{
			aktualnyStav = stav[aktualnyStav][1];
		}
		else if (vstup.compare("1,1") == 0)
		{
			aktualnyStav = stav[aktualnyStav][2];

		} else if (vstup.compare("0,1") == 0)
		{
			aktualnyStav = stav[aktualnyStav][3];
		}
		else
			return 0;

		cout << "\n\tStav: S" << aktualnyStav << "\n Semafor: ";
		if (aktualnyStav >= 2)
		{
			cout << "cervena\n\n\n";
			continue;
		}
		cout << "zelena\n\n\n";
		

	}
}