/*
1008 数组元素循环右移问题
*/
#include<iostream>
using namespace std;
void swap(int *array, int n, int m)//the numbers need to be swap from n to m
{
    int size = m - n + 1;
    for(int i = 0; i < size / 2; i++)
    {
        int temp = 0;
        temp = array[i + n];
        array[i + n] = array[m - i];
        array[m - i] = temp;
    }
}
void print(int *p, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        cout << p[i] << " ";
    }
    cout << p[n - 1];
}
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int m;
    cin >> m;
    if(n < m)
        m = m % n;//m may greater than n
    int array[100] = {0};
    for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	swap(array, 0, n - m - 1);
	swap(array, n - m, n - 1);
	swap(array, 0, n - 1);//swap three times will do the work
	print(array,n);
    return 0;
}