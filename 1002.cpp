/*
1002 写出这个数
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string arr[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char n[100] = {0};//the string which length is bigger than 15 will cause heap allocate
    cin >> n;
    int sum = 0;
    for(int i = 0; n[i] != '\0'; i++)
        sum += n[i] - '0';//calculate the sum of the numbers
    int result[3] = {0};//the biggest number is 891
    int i = 0;
    while (sum != 0)
	{
		result[i] = sum % 10;
		sum = sum/10;
		i++;//record the number of digit capacity
	}
	for (int j = 1; j < i; j++)
	{
		cout << arr[result[i-j]]<<" ";
	}
	cout << arr[result[0]];
    return 0;
}