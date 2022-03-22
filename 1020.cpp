/*
1020 月饼
*/
#include<iostream>
#include<vector>
#include<map>
#include<iomanip>
#include<functional>
using namespace std;
class cake
{

public:
	cake()
	{
		this->price = 0;
		this->weight = 0;
	}
	float weight;
	float price;
};
int main()
{
	ios::sync_with_stdio(false);
	int N = 0;
	float D = 0;
	cin >> N;
	cin >> D;
	vector<cake>v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i].weight;
	}
	for (int i = 0; i < N; i++)
	{
		cin >> v[i].price;
	}
	multimap<float, int, greater<float>>m;
	for (int i = 0; i < N; i++)
	{
		m.insert(make_pair(v[i].price / v[i].weight, i));
	}
	float Pc = 0;
	float Wc = 0;
	float price = 0;
	for (multimap<float, int,greater<float>>::iterator it = m.begin(); it != m.end(); it++)
	{
		Wc += v[it->second].weight;
		if (Wc >= D)
		{
			price = it->first;
			Wc -= v[it->second].weight;
			break;
		}
		Pc += v[it->second].price;
	}
	Pc += (D - Wc)*price;
	cout << fixed << setprecision(2) << Pc;
	return 0;
}