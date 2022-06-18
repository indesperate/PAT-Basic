/*
1055 集体照
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class student
{
public:
    string name;
    int height;
};
bool cmp(student &a, student &b)
{
    if (a.height == b.height)
        return a.name < b.name;
    else
        return a.height > b.height;
}
int main()
{
    ios::sync_with_stdio(false);
    int N, K;
    cin >> N >> K;
    vector<student> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].name >> v[i].height;
    sort(v.begin(), v.end(), cmp);
    int numOfRow = N / K;
    int middle = numOfRow / 2 + 1;
    vector<string> final(N);
    int leftNum = N - numOfRow * (K - 1);
    int leftMiddle = leftNum / 2 + 1;
    bool isRight = true;
    for (int j = 0, left = leftMiddle - 2, right = leftMiddle - 1; j < leftNum; j++)
    {//中间站好先左后右，等同于先右后左，第一个站右边
        if (isRight)
        {
            final[right] = v[j].name;
            right++;
            isRight = false;
        }
        else
        {
            final[left] = v[j].name;
            left--;
            isRight = true;
        }
    }
    for (int begin = 0; begin < leftNum - 1; begin++)
    {
        cout << final[begin] << ' ';
    }
    cout << final[leftNum - 1] << '\n';
    for (int i = 0; i < K - 1; i++)
    {
        isRight = true;
        for (int j = 0, left = middle - 2, right = middle - 1; j < numOfRow; j++)
        {
            if (isRight)
            {
                final[i * numOfRow + right + leftNum] = v[i * numOfRow + j + leftNum].name;
                right++;
                isRight = false;
            }
            else
            {
                final[i * numOfRow + left + leftNum] = v[i * numOfRow + j + leftNum].name;
                left--;
                isRight = true;
            }
        }
        for (int begin = 0; begin < numOfRow - 1; begin++)
        {
            cout << final[i * numOfRow + begin + leftNum] << " ";
        }
        cout << final[i * numOfRow + numOfRow - 1 + leftNum];
        cout << '\n';        
    }
    return 0;
}