/*
1056 组合数的和
*/
#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int sum = 0;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        sum += 11 * temp * (N - 1) ;
    }
    cout << sum;
    return 0;
}