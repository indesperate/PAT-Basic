/*
1024 科学计数法
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	string num;
	cin >> num;
	string str1 = num.substr(num.find('.')+1,num.find('E')-num.find('.')-1);
	string str2 = num.substr(num.find('E') + 1);
	int e = 0;
	for (int i = 1; i < str2.size(); i++)
	{
		e = e * 10 + str2[i] - '0';
	}
	if (num[0] == '-')
	{
		cout << "-";
	}
	if (e == 0)
	{
		cout << num[1] << "." << str1;
		return 0;
	}
	if (str2[0] == '-')
	{
		cout << "0.";
		for (int i = 0; i < e - 1; i++)
		{
			cout << "0";
		}
		cout << num[1] << str1;
		return 0;
	}
	int t = str1.size();
	if (str2[0] == '+')
	{
			cout << num[1];
			if (t > e)
			{
				for (int i = 0; i < e; i++)
				{
					cout << str1[i];
				}
				cout << ".";
				for (int i = e; i < t; i++)
				{
					cout << str1[i];
				}
			}
			else if (t == e)
			{
				for (int i = 0; i < e; i++)
				{
					cout << str1[i];
				}
			}
			else
			{
				for (int i = 0; i < t; i++)
				{
					cout << str1[i];
				}
				for (int i = 0; i < e - t; i++)
				{
					cout << "0";
				}

			}
	}
	return 0;
}