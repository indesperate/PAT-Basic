/*
1042 字符统计
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int arr[128] = {0};
    for (auto &a : s)
    {
        arr[tolower(a)]++;
    }
    int max = 97;
    for (int i = 98; i < 123; i++)
    {
        if (arr[i] > arr[max])
            max = i;
    }
    cout << char(max) << ' ' << arr[max];   
    return 0;
}