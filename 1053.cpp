/*
1053 住房空置率
*/
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    float e;
    cin >> e;
    int D;
    cin >> D;
    int emptyPossibleSum = 0;
    int emptySum = 0;
    for (int i = 0; i < N; i++)
    {
        int K;
        cin >> K;
        vector<float> v;
        int lowerSum = 0;
        for (int j = 0; j < K; j++)
        {
            float temp;
            cin >> temp;
            if (temp < e)
                lowerSum++;
        }
        if (lowerSum > K / 2)
        {
            emptyPossibleSum++;
            if (K > D)
            {
                emptySum++;
                emptyPossibleSum--;
            }
        }
    }
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << 100.0 * emptyPossibleSum / N << "% " << 100.0 * emptySum / N << "%";
    return 0;
}