/*
1014 福尔摩斯的约会
*/
#include <iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
void find1(string &s1, string &s2, int &k1, int &k2)
{
	bool flag = true;
	for (int i = 0; i < min(s1.size(), s2.size()); i++)
	{
		if (s1[i] == s2[i])
		{
			if (64 < int(s1[i]) && int(s1[i]) < 72 && flag == true)
			{
				flag = false;
				k1 = s1[i] - 64;
			}
			else if (flag == false)
			{
				if (64 < int(s1[i]) && int(s1[i]) < 79)
				{
					k2 = s1[i] - 64 + 9;
					return;
				}
				if (47 < int(s1[i]) && int(s1[i]) < 58)
				{
					k2 = s1[i] - 48;
					return;
				}
			}
		}
	}
	return;
}
int find2(string &s1, string &s2)
{
	for (int i = 0; i < min(s1.size(), s2.size()); i++)
	{

		if (s1[i] == s2[i])
		{
			if ((96 < int(s1[i]) && int(s1[i]) < 123)|| (64 < int(s1[i]) && int(s1[i]) < 91))
			{
				return i;
			}
		}
	}
}
int main()
{
    ios::sync_with_stdio(false);
	string s1;
	string s2;
	string s3;
	string s4;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	int k1 = 0;
	int k2 = 0;
	find1(s1, s2, k1, k2);
	int k3 = find2(s3, s4);
	string arr[] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	if (k3 >= 60)
	{
		k2 += k3 / 60;
		k3 = k3 % 60;
	}
	cout << arr[k1 - 1] << " "
		<< setfill('0') << setw(2) << k2 << ":"
		<< setfill('0') << setw(2) << k3;
	return 0;
}