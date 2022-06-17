/*
1038 统计同成绩学生
*/
#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int score[101] = {0};
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        score[temp]++;
    }
    int k;
    cin >> k;
    int Rank = 0;
    cin >> Rank;
    cout << score[Rank];
    for (int i = 1; i < k; i++)
    {
        cin >> Rank;
        cout << " " << score[Rank];
    }
    return 0;
}