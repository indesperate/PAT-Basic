/*
1029 旧键盘
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string stringAll;
    string stringPart;
    cin >> stringAll;
    cin >> stringPart;
    string error;
    int size = stringAll.size();
    for (size_t i = 0, j = 0; i < size; i++)
    {
        if (stringAll[i] == stringPart[j])
            j++;
        else
            error += stringAll[i];
    }
    for (auto &c: error)
        c = toupper(c);
    string result;
    for (auto &c: error)
        if (result.find(c) == string::npos)
            result += c;
    cout << result;
    return 0;
}