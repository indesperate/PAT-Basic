/*
1066 图像过滤
*/
#include<cstdio>
using namespace std;
int main()
{
    int M, N, A, B, R;
    scanf("%d%d%d%d%d", &M, &N, &A, &B, &R);
    for (int i = 0; i < M; i++)
    {
        bool notFirst = false;
        for (int j = 0; j < N; j++)
        {
            int temp;
            scanf("%d", &temp);
            if (temp <= B && A <= temp)
                temp = R;
            if (notFirst)
                printf(" %03d", temp);
            else 
            {
                printf("%03d", temp);
                notFirst = true;
            }
        }
        printf("\n");
    }
    return 0;
}