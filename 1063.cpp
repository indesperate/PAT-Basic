/*
1063 计算谱半径
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        int real;
        int complex;
        cin >> real >> complex;
        int all = real * real + complex * complex;
        if (max < all)
            max = all;
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << sqrt(max);
    return 0;
}