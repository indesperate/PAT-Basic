/*
1050 螺旋矩阵
*/
#include <stdio.h>
#include <algorithm>
#include <math.h>
#define MAX_NUM 10001
/*
1050 螺旋矩阵 （25 分）

*/
using namespace std;
int GetIntputToInt();
bool cmp(int a, int b);
int output[10000][100] = {0}; // output[100][100]，这是我一开始写成这样，导致最后一个测试点过不了，考虑到类似9997行，1列这种情况
int main()
{
    int N, rownum, colnum, arr[MAX_NUM];

    // 1.输入
    N = GetIntputToInt();
    for (int i = 0; i < N; i++)
        arr[i] = GetIntputToInt();
    colnum = sqrt(N);
    if (N % colnum == 0)
    {
        if (N == colnum * colnum)
            rownum = colnum;
        else
            rownum = N / colnum;
    }
    else
    {
        colnum--;
        while (N % colnum != 0)
            colnum--;
        rownum = N / colnum;
    }

    // 2.处理,在草稿纸上发现了一个规律，按照螺旋矩阵的规律，例如4*3，需要循环4+3-1次，其他也是这样
    sort(arr, arr + N, cmp);
    // isrow当前是不是遍历行，否则就是遍历列。isupdown是遍历从上到下，否则就是下到上。isleftright是遍历从左到右，否则就是从右到左。
    int isrow = 1, isupdown = 1, isleftright = 1, times = rownum + colnum - 1;
    for (int i = 0, j = 0, k = 0, cur = 0; i < times; i++)
    {
        //遍历顺序是左往右，上往下，右往左，下往上 顺序遍历
        // j控制行，k控制列
        if (isrow)
        {                    //行遍历
            if (isleftright) //是否左右
            {
                //正在第j行，遍历列
                for (; output[j][k] == 0 && k < colnum; k++)
                    output[j][k] = arr[cur++];
                //为下一次的上下遍历准备

                j++; //下一行
                k--; //退回前一列，因为刚刚超出边界了
                isleftright = 0;
            }
            else
            {
                for (; k >= 0 && output[j][k] == 0; k--)
                    output[j][k] = arr[cur++];
                //为下一次的下上遍历准备
                j--; //上一行
                k++; // 退回前一个
                isleftright = 1;
            }
            isrow = 0;
        }
        else
        {                 //列
            if (isupdown) //是否上下
            {
                //正在第k列，遍历行
                for (; output[j][k] == 0 && j < rownum; j++)
                    output[j][k] = arr[cur++];
                //为下一次的右左遍历准备
                j--; //退回上一行
                k--; // 退回前一列
                isupdown = 0;
            }
            else
            {
                //正在第k列，遍历行 (这里j>0，是因为顺时针回来的话，这里的下上一定至少是第二行，也就是j=1)
                for (; output[j][k] == 0 && j > 0; j--)
                    output[j][k] = arr[cur++];
                //为下一次的左右遍历准备
                j++; //退回上一行
                k++; // 退回前一列
                isupdown = 1;
            }
            isrow = 1;
        }
    }

    // 3.输出
    for (int i = 0, j = 0; i < rownum; i++, j = 0)
    {
        for (; j < colnum - 1; j++)
            printf("%d ", output[i][j]);
        printf("%d\n", output[i][j]);
    }

    return 0;
}

bool cmp(int a, int b)
{
    return a > b;
}

int GetIntputToInt()
{
    char c;
    int sum = 0;
    while ((c = getchar()) != EOF && c != ' ' && c != '\n')
        sum = sum * 10 + c - '0';
    return sum;
}