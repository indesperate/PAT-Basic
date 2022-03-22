/*
1016 部分A+B
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	string A;
	char Da;
	string B;
	char Db;
	cin >> A;
	cin >> Da;
	cin >> B;
	cin >> Db;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; A[i] != '\0'; i++)
	{
		if (A[i] == Da)
			sum1 = sum1 * 10 + Da - '0';
	}
	for (int i = 0; B[i] != '\0'; i++)
	{
		if (B[i] == Db)
			sum2 = sum2 * 10 + Db - '0';
	}
	cout << sum1 + sum2;
	return 0;
}