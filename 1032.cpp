/*
1032 挖掘机技术哪家强
*/
#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int arr[100001] = {0};
    for (int i = 0; i < N; i++)
    {
        int num, plus;
        cin >> num >> plus;
        arr[num] += plus;
    }
    int max = 1;
    for (int i = 1; i < 100001; i++)
    {
        if (arr[i] > arr[max])
            max = i;
    }
    cout << max << " " << arr[max];
    return 0;
}