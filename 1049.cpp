/*
1049 数列的片段和
*/
#include<iostream>
using namespace std;
int main()
{
    long long n,i;
    long double sum = 0.0,x;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        scanf("%Lf",&x);
        sum += x*(i*(n-i+1));
    }
    printf("%.2Lf",sum);
    return 0;
}