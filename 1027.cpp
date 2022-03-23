/*
1027 打印沙漏
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N;
	char c;
	cin >> N;
	cin >> c;
	int n = sqrt((N + 1) / 2.0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * (n - i) - 1; j++)
		{
			cout << c;
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <n-i-1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 *  i+1; j++)
		{
			cout << c;
		}
		cout << endl;
	}
	cout << N - 2 * n*n + 1<<endl;
	return 0;
}