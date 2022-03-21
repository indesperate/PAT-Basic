/*
1010 一元多项式求导
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	vector<int>a;//coefficient
	vector<int>b;//rank
	int i = 0;
	while (cin.peek()!='\n')//check the next char, stop when encounter '\n'
	{
		int num1 = 0;
		int num2 = 0;
		cin >> num1 && cin >> num2;
		a.push_back(num1);
		b.push_back(num2);
		a[i] = a[i] * b[i];
		if (b[i] > 0)
			b[i] = b[i] - 1;
		i++;
	}
	cout << a[0] << " " << b[0];
    for (int j = 1; (j < i)&&a[j]!=0 ; j++)
        cout <<" "<< a[j] << " " << b[j];
	return 0;
}