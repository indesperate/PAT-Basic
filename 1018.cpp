/*
1018 锤子剪刀布
*/
#include<iostream>
#include<string>
using namespace std;
void print(int &C, int &J, int &B)
{
	int max = 0;
	if (max < C)
	{
		max = C;
	}
	if (max < J)
	{
		max = J;
	}	
	if (max < B)
	{
		max = B;
	}
	if (max == B)
	{
		cout << "B";
		return;
	}
	if (max == C)
	{
		cout << "C";
		return;
	}
	if (max == J)
	{
		cout << "J";
		return;
	}
}
int main()
{
    ios::sync_with_stdio(false);
	int win=0;
	int lose=0;
	int equal=0;
	int Cwin = 0;
	int Jwin = 0;
	int Bwin = 0;
	int C2win = 0;
	int J2win = 0;
	int B2win = 0;
	ios::sync_with_stdio(false);
	int N = 0;
	cin >> N;
	char a;
	char b;
	for (int i = 0; i < N; i++)
	{
		cin >> a && cin >> b;
		switch (a)
		{
		case 'C':
			{
				switch (b)
				{
				case 'C':
					equal++;
					break;
				case 'J':
					win++; Cwin++;
					break;
				case 'B':
					lose++; B2win++;
					break;
				}
				break;
			}
		case 'J':
		{
			switch (b)
			{
			case 'J':
				equal++;
				break;
			case 'B':
				win++; Jwin++;
				break;
			case 'C':
				lose++; C2win++;
				break;
			}
			break;
		}		
		case 'B':
		{
			switch (b)
			{
			case 'B':
				equal++;
				break;
			case 'C':
				win++; Bwin++;
				break;
			case 'J':
				lose++; J2win++;
				break;
			}
			break;
		}
		default:
			break;
		}
	}
	cout << win << " " << equal << " " << lose << endl;
	cout << lose << " " << equal << " " << win << endl;
	print(Cwin, Jwin, Bwin);
	cout << " ";
	print(C2win, J2win, B2win);
	system("pause");
	return 0;
}