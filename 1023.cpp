/*
1023 组个最小数
*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    ios::sync_with_stdio(false);
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		int N = 0;
		cin >> N;
		for (int j = 0; j < N; j++)
		{
			v.push_back(i);
		}
	}
	int k = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i]!= 0)
		{
			k = i;
			break;
		}
	}
	cout << v[k];
	for (int i = 0; i < v.size() ; i++)
	{
		if(i!=k)
		cout << v[i];
	}
	return 0;
}