/*
1039 到底买不买
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;
	vector<int>a(150);
	for (auto &s:s1)
	{
		a[s]++;
	}
	int Balls=0;
	bool isAll = true;
	for (auto &s : s2)
	{
		a[s]--;
	}
	for (auto &s : a)
	{
		if (isAll)
		{
			if (s < 0)
			{
				isAll = false;
				Balls = s;
			}
			else
			{
				Balls += s;
			}
		}
		else
		{
			if (s < 0)
			{
				Balls += s;
			}
		}
	}
	if (isAll)
	{
		cout << "Yes " << Balls;
	}
	else
	{
		cout << "No " << -Balls;
	}
	return 0;
}