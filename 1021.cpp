/*
1021 个位数统计
*/
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int c[10] = { 0 };
	for (int i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
		case '0':
			c[0]++;
			break;
		case '1':
			c[1]++;
			break;
		case '2':
			c[2]++;
			break;
		case '3':
			c[3]++;
			break;
		case '4':
			c[4]++;
			break;
		case '5':
			c[5]++;
			break;
		case '6':
			c[6]++;
			break;
		case '7':
			c[7]++;
			break;
		case '8':
			c[8]++;
			break;
		case '9':
			c[9]++;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (c[i] != 0)
			cout << char(48 + i) << ":" << c[i] << endl;
	}
	return 0;
}