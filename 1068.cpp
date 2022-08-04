/*
1068 万绿丛中一点红
*/
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int M, N, TOL;
    cin >> M >> N >> TOL;
    int array[1000][1000] = {0};
    map<int, int> unique;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            int temp;
            scanf("%d", temp);
            unique[temp]++;
        }
    bool exist = false;
    int x, y;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (unique[array[i][j]] == 1)
            {
                if (i - 1 > 0 && abs(array[i][j] - array[i - 1][j]) <= TOL)
                    continue;
                if (j - 1 > 0 && abs(array[i][j] - array[i][j - 1]) <= TOL)
                    continue;
                if (j + 1 < M && abs(array[i][j] - array[i][j + 1]) <= TOL)
                    continue;
                if (i + 1 < N && abs(array[i][j] - array[i + 1][j]) <= TOL)
                    continue;
                if (abs(array[i][j] - array[i - 1][j - 1]) <= TOL)
                    continue;
                if (abs(array[i][j] - array[i - 1][j + 1]) <= TOL)
                    continue;
                if (abs(array[i][j] - array[i + 1][j - 1]) <= TOL)
                    continue;
                if (abs(array[i][j] - array[i + 1][j + 1]) <= TOL)
                    continue;
            }
            else
                continue;
            if (exist)
            {
                printf("Not  Unique");
                return 0;
            }
            else
            {
                x = i;
                y = j;
                exist = true;
            }
        }
    if (exist)
        printf("(%d, %d): %d", y, x, array[x][y]);
    else
        printf("Not Exist");
    return 0;
}