/*
1012 数字分类
*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	int i = 0;
	cin >> i;
	int A1=0;
	int A2=0;
	int A3=0;
	float A4=0;
	int A5=0;
	float t = 0;
	int flag1 = 0;
	bool flag = true;
	for (int j = 0; j < i; j++)
	{
		int num;
		cin >> num;
		switch (num % 5)
		{
            case 0:
            {
                if (num % 2 == 0)
                {
                    A1 += num;
                }
                break;
            }
            case 1:
            {
                if (flag == true)
                {
                    A2 += num;
                    flag = false;
                }
                else
                {
                    A2 -= num;
                    flag = true;
                }
                flag1++;
                break;
            }
            case 2:
            {
                A3++;
                break;
            }
            case 3:
            {
                A4 += num;
                t++;
                break;
            }
            default:
            {
                if (A5 < num)
                {
                    A5 = num;
                }
                break;
            }
		}
	}
    //A1
	if (A1 != 0)
		cout << A1 << " ";
	else
		cout << "N"<<" ";
    //A2
	if (flag1 != 0)
		cout << A2 << " ";
	else
		cout << "N" << " ";
    //A3	
	if (A3 != 0)
		cout << A3 << " ";
	else
		cout << "N" << " ";
    //A4	
	if (A4 != 0)
		cout <<fixed<<setprecision(1)<< A4 /t<< " ";
	else
		cout << "N" << " ";
    //A5
	if (A5 != 0)
		cout << A5 ;
	else
		cout << "N";
	return 0;
}