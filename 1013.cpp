/*
1013 数素数
*/
#include <iostream>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;
bool isprime(int i, vector<int>&v)//use the prime that is konwn to check the number
{
	for (int j = 0; j < v.size()&&(v[j]<sqrt(i)+1); j++)//test all the number or v[j]<sqrt[number]
	{
		if (i % v[j] == 0)
			return false;
	}
	return true;
}
int main()
{
    ios::sync_with_stdio(false);
	vector<int>v;
	int m = 0;
	int n = 0;
	cin >> m && cin >> n;
	v.push_back(2);
	for (int i = 3,j=1;j<n; i++)
	{
		if (isprime(i, v) == true)
		{
			v.push_back(i);
			j++;
		}
	}
	cout <<*(v.begin()+m-1);
	int ten = 1;
	for (auto it = (v.begin() + m ); it != v.end(); it++)
	{
		if (ten % 10 != 0)
			printf(" ");
		else
			printf("\n");
		printf("%d",*it);
		ten++;
	}
	return 0;
}