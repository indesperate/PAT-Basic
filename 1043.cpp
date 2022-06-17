/*
1043 输出PATest
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0;
    // P=80,A=65,T=84,e=101,s=115,t=116
    for (const auto &c : s1)
    {
        switch (c)
        {
        case 'P':
            P++;
            break;
        case 'A':
            A++;
            break;
        case 'T':
            T++;
            break;
        case 'e':
            e++;
            break;
        case 's':
            s++;
            break;
        case 't':
            t++;
            break;
        default:
            break;
        }
    }
    while (true)
    {
        if (P > 0)
        {
            cout << 'P';
            P--;
        }
        if (A > 0)
        {
            cout << 'A';
            A--;
        }
        if (T > 0)
        {
            cout << 'T';
            T--;
        }
        if (e > 0)
        {
            cout << 'e';
            e--;
        }
        if (s > 0)
        {
            cout << 's';
            s--;
        }
        if (t > 0)
        {
            cout << 't';
            t--;
        }
        if (!(P || A || T || t || e || s || t))
            break;
    }
    return 0;
}