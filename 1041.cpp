/*
1041 考试座位号
*/
#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	string num;
	int testPosition;
};
int main()
{
	ios::sync_with_stdio(false);
	student arr[1001];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		student temp;
		int testPosition;
		int tryPosition;
		cin >> temp.num >> tryPosition >> temp.testPosition;
		arr[tryPosition] = temp;
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int temp;
		cin >> temp;
		cout << arr[temp].num <<' '<< arr[temp].testPosition << '\n';
	}
	return 0;
}