/*
1026 程序运行时间
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define CLK_TCK 100.0
int main()
{
	int C1;
	int C2;
	cin >> C1;
	cin >> C2;
	int C = C2 - C1;
	int second = C / 100.0+0.5;
	int minite = second / 60;
	second -= minite * 60;
	int hour = minite / 60;
	minite -= hour * 60;
	cout <<setw(2)<<setfill('0')<<hour << ":" << setw(2) << setfill('0')<<minite << ":" << setw(2) << setfill('0')<<second;
	return 0;
}