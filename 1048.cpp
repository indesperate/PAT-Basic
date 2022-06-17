/*
1048 数字加莫
*/
#include <iostream>
#include <string>
#include <vector>
#define A(j) ((j) > -1 ? A[(j)] : '0')
#define B(j) ((j) > -1 ? B[(j)] : '0')
using namespace std;
int main()
{
    char num[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
    string A;
    string B;
    cin >> A >> B;
    string C;
    bool parity = true;
    for (int i = B.size() - 1, j = A.size() - 1; i > -1 || j > -1; i--, j--)
    {
        if (parity)
        {
            C.push_back(num[(A(j) + B(i) - 2 * '0') % 13]);
            parity = false;
        }
        else
        {
            int temp = B(i) - A(j);
            C.push_back(temp < 0 ? temp + 10 + '0' : temp + '0');
            parity = true;
        }
    };
    for (int i = C.size() - 1; i > -1; i--)
    {
        cout << C[i];
        return 0;
    }