/*
1064 朋友数
*/
#include<iostream>
using namespace std;
int sumNum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int next = num / 10;
        sum += num - next * 10;
        num = next;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    int array[37] = {0};
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        array[sumNum(temp)]++;
    }
    bool isFirst = true;
    int sum = 0;
    for (int i = 0; i < 37; i++)
    {
        if (array[i])
            sum++;
    }
    cout << sum << '\n';
    for (int i = 0; i < 37; i++)
    {
        if (array[i])
        {
            if (isFirst)
                {
                    isFirst = false;
                    cout << i;
                }
            else
                cout << ' ' <<i;
        }
    }
}