/*
1058 选择题
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Problem
{
public:
    int location;
    int score;
    int wrongTimes;
    string rightAnswer;
};
bool cmp(Problem &a, Problem &b)
{
    if (a.wrongTimes == b.wrongTimes)
        return a.location < b.location;
    else
        return a.wrongTimes < b.wrongTimes;
}
int main()
{
    ios::sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    int score[1000] = {0};
    Problem array[100];
    cin.ignore(10, '\n');
    for (int i = 0; i < M; i++)
    {
        string temp;
        getline(cin, temp);
        array[i].location = i + 1;
        array[i].score = temp[0] - '0';
        array[i].rightAnswer = temp.substr(4);
        array[i].wrongTimes = 0;
    }
    for (int i = 0; i < N; i++)
    {
        string answer;
        getline(cin, answer);
        string answerPiece[100];
        bool isIn = false;
        int Piece = 0;
        for (auto & c : answer)
        {
            if (c == '(')
            {
                isIn = true;
                continue;
            }
            if (c == ')')
            {
                isIn = false;
                Piece++;
                continue;
            }
            if (isIn)
            {
                answerPiece[Piece] += c;
            }
        }
        for (int j = 0; j < M; j++)
        {
            if (answerPiece[j] == array[j].rightAnswer)
                score[i] += array[j].score;
            else
                array[j].wrongTimes++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << score[i] << "\n";
    }
    sort(array, array + M, cmp);
    int times = array[M-1].wrongTimes;
    int location = 0;
    if (!times)
    {
        cout << "Too simple";
        return 0;
    }
    cout << times;
    for(int i = M - 2; i >= 0; i--)
    {
        if(array[i].wrongTimes != times)
        {
            location = i + 1;
            break;
        }
    }
    for (int i = location; i < M; i++)
    {
        cout << " " << array[i].location;
    }
    return 0;
}