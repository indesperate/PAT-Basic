/*
1057 数零壹
*/
#include<iostream>
#include<string>
using namespace std;
int sumAlpha()
{
    char c;
    int sum = 0;
    while ((c = getchar()) != '\n')
    {
        if(isalpha(c))
            sum += toupper(c) - 64;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    int sum = sumAlpha();
    if (!sum)
    {
        cout << "0 0";
        return 0;
    }
    int zero = 0;
    int one = 0;
    while(sum > 0)    
    {
        int num = sum & 0x1;
        if (num)
            one++;
        else
            zero++;
        sum >>= 1;
    }
    cout << zero << ' ' << one;
    return 0;
}