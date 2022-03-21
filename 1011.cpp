/*
1011 A+B 和 C 
*/
#include <iostream>
using namespace std;
bool compare(long a, long b, long c)
{
	if ((a + b) > c)
		return true;
	else
		return false;
}
#define compare(a, b, c) (((a)+ (b)) > (c))
int main()
{
    ios::sync_with_stdio(false);
	int i = 0;
	cin >> i;
	long long a[10] = {0};
	long long b[10] = {0};
	long long c[10] = {0};
	for (int j = 0; j < i; j++)
		cin >> a[j] && cin >> b[j] && cin >> c[j];
	for (int j = 0; j < i; j++)
	{
		if (compare(a[j], b[j], c[j]))
			cout << "Case #" << j + 1 << ": " << "true\n";
		else
			cout << "Case #" << j + 1 << ": " << "false\n";
	}
	return 0;
}