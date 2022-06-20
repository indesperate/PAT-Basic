/*
1065 单身狗
*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<iomanip>
using namespace std;
class People
{
public:
    People()
    {
        couple = 0;
        isIn = false;
    }
    int couple;
    bool isIn;
};
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    People array[100000];
    for (int i = 0; i < N; i++)
    {
        int first;
        int second;
        cin >> first >> second;
        array[first].couple = second;
        array[second].couple = first;
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int id;
        cin >> id;
        array[id].isIn = true;
    }
    vector<int> result;
    for (int i = 0; i < 100000; i++)
    {
        if (array[i].isIn)
        {
            if (!array[array[i].couple].isIn)
            {
                result.push_back(i);
            }
        }
    }
    int size = result.size();
    cout << size << '\n';
    if (size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            cout << setw(5) << setfill('0') << result[i] << ' ';
        }
        cout << setw(5) << setfill('0') << result[size - 1];
    }
    return 0;
}