/*
1040 有几个PAT
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	/*遇到第一p,开始记录A，
	直到第二个p或最终结束
	计算PA个数=P*A,p++,
	遇到第一个A，开始记录T，
	直到第二个A或结束，计算PAT，A++，P*A*T，计入sum
	*/
	long long P=0;
	long long A=0;
	long long T=0;
	long long PA = 0;
	long long PAT = 0;
	for (unsigned int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case 'P': {PA += P * A; P++; A = 0; break; }
		case 'A': {A++; break; }
		case 'T': {PA += P * A; A = 0; PAT += PA; break; }
		default:
			break;
		}
		
	}
	std::cout << PAT%1000000007;
	return 0;
}