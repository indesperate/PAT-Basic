/*
1033 旧键盘打字
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string error;
    string expectString;
    string actualString;
    getline(cin,error);//错误字符串可能为空
    cin >> expectString;
    bool shiftIsBreak = error.find('+') != string::npos;
    for (auto &c : expectString)
    {
        if (shiftIsBreak && 64 < c && c < 91)
            continue;
        if (error.find(toupper(c)) == string::npos)
            actualString.push_back(c);
    }
    cout << actualString;
    return 0;
}