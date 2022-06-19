/*
1062 最简分数
*/
#include<iostream>
using namespace std;
bool isSimplify(int a, int b)
{
	if (a > b)
	{
		swap(a,b);
	}
	if (a == 1)
		return true;
	while (a > 0)
	{
        int t = b % a;
        b = a;
        a = t;
	}
    if (b == 1) return true;
    return false;
}//是否互质
bool compare(int son1, int mum1, int son2, int mum2)
{
    return son1 * mum2 < son2 * mum1;
}//比较分数大小
int main()
{
    ios::sync_with_stdio(false);
    int son1, son2, mum1, mum2, mumOut;
    char c;
    cin >> son1 >> c >> mum1 >> son2 >> c >> mum2 >> mumOut;
    if (compare(son2, mum2, son1, mum1))
    {
        int temp = son1;
        son1 = son2;
        son2 = temp;
        temp = mum1;
        mum1 = mum2;
        mum2 = temp;
    }//俩数字大小不确定
    bool isLarge = false;
    for (int i = 1; i < mumOut; i++)
    {
        if (isSimplify(i, mumOut))
        {
            if (!isLarge)
            {
                if (compare(son1, mum1, i, mumOut))
                {
                    isLarge = true;
                    if (compare(i, mumOut, son2, mum2))
                            cout << i << '/' << mumOut;
                    else
                        break;
                }
            }
            else
            {
                if (compare(i, mumOut, son2, mum2))
                    cout << ' ' << i << '/' << mumOut;
                else
                    break;
            }
        }
    }
    return 0;
}