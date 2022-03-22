/*
1022 D进制的A+B
*/
#include<iostream>
#include<deque>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int A;
	int B;
	int D;
	deque<int>d;
	cin >> A;
	cin >> B;
	cin >> D;
	int C = A + B;
	while (C >= D)
	{
		d.push_front(C%D);
		C = C / D;
	}
	d.push_front(C);
	for (int i = 0; i < d.size(); i++)
		cout << d[i];
	return 0;
}