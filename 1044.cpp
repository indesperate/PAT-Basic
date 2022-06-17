/*
1044 火星数字
*/
#include <iostream>
#include <string>
using namespace std;
int find(string s1, string arr[])
{
    for (int i = 0; i < 13; i++)
    {
        if (s1 == arr[i])
            return i;
    }
    return -1;
}
int main()
{
    string lower[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string higher[13] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int N;
    cin >> N;
    getchar(); //读取N后的回车字符
    for (int i = 0; i < N; i++)
    {
        if (isdigit(cin.peek()))
        {
            int num;
            cin >> num;
            getchar();
            if (num < 13)
                cout << lower[num] << endl;
            else
            {
                int hnum = num / 13;
                num -= hnum * 13;
                if (num != 0)
                    cout << higher[hnum] << " " << lower[num] << endl;
                else
                    cout << higher[hnum] << endl;
            }
        }
        else
        {
            string num;
            getline(cin, num);
            if (num.size() < 5)
            {
                int j = find(num, lower);
                if (j != -1)
                    cout << j << endl;
                else
                    cout << find(num, higher) * 13 << endl;
            }
            else
            {
                string hnum = num.substr(0, 3);
                num = num.substr(4);
                cout << (find(hnum, higher) * 13 + find(num, lower)) << endl;
            }
        }
    }
    return 0;
}