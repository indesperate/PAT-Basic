/*
1015 德才论
*/
/*
1015 德才论
*/
#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int L = 0;
int H = 0;
class Person
{
public:
	int m_id;
	int caiScore;
	int deiScore;
};
class myCompare
{
public:
	bool operator()(const Person &p1, const Person &p2)
	{
		int num1 = p1.caiScore + p1.deiScore;
		int num2 = p2.caiScore + p2.deiScore;
		if (num1 != num2)
		{
			return num1 > num2;
		}
		if (p1.deiScore != p2.deiScore)
		{
			return p1.deiScore > p2.deiScore;
		}
		else
		{
			return p1.m_id < p2.m_id;
		}
	}
};
int main()
{
    ios::sync_with_stdio(false);
	int N = 0;
	cin >> N;
	cin >> L;
	cin >> H;
	int num = 0;
	vector<Person>s[4];
	for (int i = 0; i < N; i++)
	{
		int id = 0;
		int j = 0;
		int k = 0;
		cin >> id >> j >> k;
		Person sp;
		sp.m_id = id;
		sp.deiScore = j;
		sp.caiScore = k;
		if (j >= L && k >= L)
		{
			if (j >= H && k >= H)
			{
				s[0].push_back(sp);
			}
			else if (j >= H && k < H)
			{
				s[1].push_back(sp);
			}
			else if (j < H&&k < H&&j>=k)
			{
				s[2].push_back(sp);
			}
			else
			{
				s[3].push_back(sp);
			}
			num++;
		}
	}
	cout << num << endl;
	for (int i = 0; i < 4; i++)
	{
		sort(s[i].begin(), s[i].end(), myCompare());
		for (int j = 0; j < s[i].size(); j++)
		{
			printf("%d %d %d\n", s[i][j].m_id, s[i][j].deiScore, s[i][j].caiScore);
		}
	}
	return 0;
}