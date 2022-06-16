/*
1034 插入与归并
*/
#include <iostream>
#include <vector>
using namespace std;
int findElem(int lo, int hi, vector<int> &v, int e)
{
    while (lo < hi)
    {
        int mi = (lo + hi) >> 1;
        if (e < v[mi])
            hi = mi;
        else
            lo = mi + 1;
    }
    return lo;
} //找到需要插入的位置
void insertSort(vector<int> &v, const vector<int> &test)
{
    bool flag = false;
    for (size_t i = 1; i < v.size(); i++)
    {
        int temp = v[i];
        int t = findElem(0, i, v, temp);
        for (int j = i; j > t; j--)
        {
            v[j] = v[j - 1];
        } //插入位置元素后移至i
        v[t] = temp;
        if (flag)
        {
            cout << "Insertion Sort\n";
            for (size_t i = 0; i < v.size() - 1; i++)
            {
                cout << v[i] << " ";
            }
            cout << v[v.size() - 1];
            break;
        }
        if (v == test)
        {
            flag = true;
        }
    }
}
void merge(int lo, int mi, int hi, vector<int> &v)
{
    if (lo >= hi)
        return;
    int firstSize = mi - lo;
    int secondSize = hi - mi;
    auto arrayFinal = v.begin() + lo;
    auto arraySecond = v.begin() + mi;
    vector<int> arrayFirst(firstSize);
    for (int i = 0; i < firstSize; i++)
        arrayFirst[i] = arrayFinal[i];
    for (int final = 0, first = 0, second = 0; final < hi - lo;)
    {
        if (first < firstSize && (secondSize <= second || arrayFirst[first] < arraySecond[second])) //短路防止数组越界
            arrayFinal[final++] = arrayFirst[first++];
        else
            arrayFinal[final++] = arraySecond[second++];
    }
}
void mergeSort(vector<int> &v, const vector<int> &test)
{
    int lo = 0;
    int hi = v.size();
    bool flag = false;
    for (size_t i = 1; i < v.size(); i <<= 1)
    {
        for (int minlo = lo, minmi = lo + i, minhi = lo + 2 * i; minmi < hi;)
        {
            if (minhi > hi)
                minhi = hi;
            merge(minlo, minmi, minhi, v);
            minlo = minhi;
            minmi = minlo + i;
            minhi = minlo + 2 * i;
        }
        if (flag)
        {
            cout << "Merge Sort" << endl;
            for (size_t i = 0; i < v.size() - 1; i++)
            {
                cout << v[i] << " ";
            }
            cout << v[v.size() - 1];
            break;
        }
        if (v == test)
            flag = true;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> v1(N);
    vector<int> test(N);
    for (auto &n : v1)
        cin >> n;
    for (auto &n : test)
        cin >> n;
    vector<int> v2(v1);
    insertSort(v1, test);
    mergeSort(v2, test);
    return 0;
}