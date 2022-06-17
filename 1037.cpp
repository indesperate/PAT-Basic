/*
1037 在霍格沃兹找零钱
*/
#include<iostream>
using namespace std;
int main()
{
	int Knut1;
	int Sickle1;
	int Gallen1;
	int Knut2;
	int Sickle2;
	int Gallen2;
	cin >> Gallen1;
	getchar();
	cin >> Sickle1;
	getchar();
	cin >> Knut1;
	cin >> Gallen2;
	getchar();
	cin >> Sickle2;
	getchar();
	cin >> Knut2;
	bool isminus = false;
	if (Gallen2 < Gallen1)
	{
		isminus = true;
	}
	else if (Gallen1 == Gallen2 && Sickle2 < Sickle1)
	{
		isminus = true;
	}
	else if (Gallen1 == Gallen2 && Sickle2 == Sickle1 && Knut2 < Knut1)
	{
		isminus = true;
	}
	int Knut=0;
	int Sickle=0;
	int Gallen=0;
	if (!isminus)
	{
		if (Knut2 < Knut1)
		{
			Knut2 += 29;
			Sickle2--;
		}
		Knut = Knut2 - Knut1;
		if (Sickle2 < Sickle1)
		{
			Sickle2 += 17;
			Gallen2--;
		}
		Sickle = Sickle2 - Sickle1;
		Gallen = Gallen2 - Gallen1;
		cout << Gallen << "." << Sickle << "." << Knut;
	}
	else
	{
		if (Knut1 < Knut2)
		{
			Knut1 += 29;
			Sickle1--;
		}
		Knut = Knut1 - Knut2;
		if (Sickle1 < Sickle2)
		{
			Sickle1 += 17;
			Gallen1--;
		}
		Sickle = Sickle1 - Sickle2;
		Gallen = Gallen1 - Gallen2;
		cout <<"-"<< Gallen << "." << Sickle << "." << Knut;
	}
	return 0;
}