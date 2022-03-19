/*
1006 换个格式输出整数
*/
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	int i;
	cin >> i;
	int arr[3];
	arr[0] = i / 100;
	arr[1] = i / 10 % 10;
	arr[2] = i % 10;
	for (int i = 0; i < arr[0]; i++)
	{
		cout << 'B';
	}
	for (int i = 0; i < arr[1]; i++)
	{
		cout << 'S';
	}
	for (int i = 0; i < arr[2]; i++)
	{
		cout << i + 1;
	}
	return 0;
}