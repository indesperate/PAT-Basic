/*
1030 完美数列
*/
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    unsigned int N = 0;
    unsigned int p = 0;
    cin >> N;
    cin >> p;
    vector<int> v(N);
    unsigned int num = 0;
    for (auto &c : v)
        cin >> c;
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++)
    {
        for (int j = i + num; j < N; j++)
        {
            if (v[j] > p * v[i])
                break;
            if (num < j - i + 1)
                num = j - i + 1;
        }
    }
    cout << num;
    return 0;
}