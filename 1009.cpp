/*
1009 说反话
*/
#include <iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	string in;
	getline(cin, in);//read the line
	string s[40];
	int j = 0;
	for (int i = 0; i < in.size(); i++)
	{
		if (in[i] != ' ')
			s[j] += in[i];//stop when meet a space
		else
	        j++;
	}
	for (int i = j; i > 0; i--)
	{
		cout << s[i]<<" ";
	}
	cout << s[0];
	return 0;
}