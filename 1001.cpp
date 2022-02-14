/*
1001 害死人不偿命的(3n+1)
*/
#include<iostream>
using namespace std;
int Callatz(int n)
{
    int times = 0;//record the times
    while(n != 1)
    {
        if ((n & 1) == 0)//n is even number
            n >>= 1;
        else
            n = (3 * n + 1) >> 1;
        times++;
    }
    return times;
}
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << Callatz(n);
    return 0;
}
    
