/*
1061 判断题
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    vector<int> score(M);
    vector<int> answer(M);
    for (int i = 0; i < M; i++)
        cin >> score[i]; 
    for (int i = 0; i < M; i++)
        cin >> answer[i]; 
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int i = 0; i < M; i++)
        {
            int temp;
            cin >> temp;
            if (temp == answer[i])
                sum += score[i];
        }
        cout << sum << "\n";
    }
    return 0;
}
