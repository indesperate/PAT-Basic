/*
1007 素数对猜想
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isprime(int i,vector<int>&v)
{
		for (int j = 0; j < v.size()&&v[j]<sqrt(i)+1; j++)
		{
			if (i % v[j] == 0)
			{
				return false;
			}
		}
		return true;
}
int main()
{
    ios::sync_with_stdio(false);
    vector<int>v;
	int n = 0;
	cin >> n;
	int num = 0;
	v.push_back(2);
	for (int i = 3; i <= n; i++)
	{
		if (isprime(i,v) == true)
		{
			int j = v.back();
			v.push_back(i);
			if ((i - j) == 2)
			{
				num++;
			}
		}
	}
	cout << num;
    return 0;
}