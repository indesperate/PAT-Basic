/*
1060 爱丁顿数
*/
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int s[100002] = {0};
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp > 100000)
            s[100001]++;
        else
            s[temp]++;
    }
    int E = 0;
    int sum = 0;
    for (int i = 0; i < 100002; i++)
    {
        sum += s[i];
        if ((N - sum) >= i)
            E = i;
        else
        {
            break;
        }
    }
    cout << E;
    return 0;
}