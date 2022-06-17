/*
1045 快速排序
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int array[100001] = {0};
    int arrayToSort[100001] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
        arrayToSort[i] = array[i];
    }
    sort(arrayToSort, arrayToSort + N);
    int num = 0;
    int arrayPrint[100001] = {0};
    int max = 0;
    for (int i = 0; i < N; i++)
    {

        if (array[i] == arrayToSort[i] && array[i] > max)
            arrayPrint[num++] = array[i];
        if (array[i] > max)
            max = array[i];
    //快排位置为排序后位置，但是位置相同不代表满足条件，
    //但是如果左边都比他小，后边则必然比他大，所以只需保证左边都小于该数
    }
    if (num == 0)
    {
        cout << '0\n';
        return 0;
    }
    cout << num << '\n';
    for (int i = 0; i < num - 1 ; i++)
    {
        cout << arrayPrint[i] << " ";
    }
    cout << arrayPrint[num - 1];
    return 0;
}