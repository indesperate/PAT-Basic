/*
1028 人口普查
*/
#include<iostream>
#include<string>
#include<vector>
#include <typeinfo>
using namespace std;
string dateBegin = "1814/09/05";
string dateEnd = "2014/09/07";
class Person
{
public:
	string name;
	string date;
};
int main()
{
	ios::sync_with_stdio(false);
	vector<Person>v;
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		Person sp;
		cin >> sp.name >> sp.date;
		if ((sp.date > dateBegin)&&(sp.date < dateEnd))
		{
			v.push_back(sp);
		}
	}
	cout << v.size();
	int max = 0;
	int min = 0;
	for (int i=0;i<v.size();i++)
	{
		if (v[i].date > v[max].date)
		{
			max = i;
            continue;
		}
		if (v[i].date < v[min].date)
		{
			min = i;
		}
	}
    if(v.size()!=0)
	    cout <<" "<< v[min].name << " " << v[max].name;
	return 0;
}