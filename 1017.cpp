/*
1017 A除以B
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	string A;
	string A1;
	int B;
	cin >> A;
	cin >> B;
	int k = 0;
	int p = 0;
	int q = 0;
	p = A[0] - '0';
	q = p / B;
	k = p - q * B;
	if (q != 0)
	{
		A1.push_back(char(q + '0'));
	}
	else
	{
		if (A.size() == 1)
		{
			cout << "0 " << A[0];
			return 0;
		}
	}
	for (int i = 1; i < A.size(); i++)
	{
		p = k * 10 + A[i] - '0';
		q = p / B;
		k = p - q * B;
		A1.push_back(char(q + '0'));
	}
	cout << A1 << " " << p - q * B;
	return 0;
}