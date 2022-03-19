/*
1005 继续(3n+1)猜想
*/
#include<iostream>
using namespace std;
int main()
{
    int hash[101] = {0};
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        hash[temp] = 1;
    }
    for(int j = 100; j > 0; j--)
    {
        if(hash[j])
        {
            int i = j;
            while(i > 1)
            {
                if(i & 1)
                {
                    i = (i * 3 + 1) >> 1;
                    if (i > 100)
                        continue;
                    if (hash[i])
                        hash[i] = 0;
                }
                else
                {
                    i >>= 1;
                    if (i > 100)
                        continue;
                    if (hash[i])
                        hash[i] = 0;
                }
            }
            
        }
    }
    bool flag = false;
    for(int i = 100; i > 0; i--)
    {
        if(hash[i])     
        {
            if(flag)
                cout<<" "<<i;
            else
            {
                cout<<i;
                flag = true;
            }
        }
    }
}