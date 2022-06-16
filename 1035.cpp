/*
有理数四则运算
*/
#include<iostream>
using namespace std;
using Loint = long long;
Loint simplifyMaxTwo(Loint &son, Loint &mum)
{
	if (son == 0)
		return 0;
	Loint a = son;
	Loint b = mum;
	if (abs(a) > b)
	{
		swap(a,b);
	}
	if (abs(a) == 1)
		return 1;
	while (1)
	{
		Loint t = b % a;
		if (t == 0)
		{
			son /= abs(a);
			mum /= abs(a);
			return abs(a);

		}
		else
		{
			b = a;
			a = t;
		}//辗转相除法
	}
}//最大公约数
Loint mutiplyMinTwo(Loint mum1, Loint mum2)
{
	return mum1 * mum2 / simplifyMaxTwo(mum1, mum2);
}//最小公倍数
void printNum(Loint son, Loint mum)
{
	if (son == 0)
	{
		cout << 0;
		return;
	}
	if (son > 0)
	{
		if (abs(son) < mum)
		{
			cout << son << "/" << mum;
		}
		else
		{
			Loint num = son / mum;
			son -= num * mum;
			cout << num;
			if (son != 0)
			{
				cout << " " << son << "/" << mum;
			}
		}
	}
	else
	{
		cout << "(";
		if (abs(son) < mum)
		{
			cout << son << "/" << mum;
		}
		else
		{
			Loint num = son / mum;
			son -= num * mum;
			cout << num;
			if (son != 0)
			{
				cout << " " << abs(son) << "/" << mum;
			}
		}
		cout << ")";
	}
}
Loint plusTwo(Loint son1, Loint mum1, Loint son2, Loint mum2,Loint c)
{
	son1 *= c / mum1;
	son2 *= c / mum2;
	return son1 + son2;
}
Loint minusTwo(Loint son1, Loint mum1, Loint son2, Loint mum2, Loint c)
{
	son1 *= c / mum1;
	son2 *= c / mum2;
	return son1 - son2;
}
void plusMinusTwo(Loint son1, Loint mum1, Loint son2, Loint mum2)
{
    Loint c = mutiplyMinTwo(mum1, mum2);
	Loint c1 = c;
	Loint c2 = c;
	Loint plusNum = plusTwo(son1, mum1, son2,mum2,c);
	Loint minusNum = minusTwo(son1, mum1, son2, mum2, c);
	simplifyMaxTwo(plusNum, c1);
	simplifyMaxTwo(minusNum, c2);
	printNum(son1, mum1);
	cout << " + ";
	printNum(son2, mum2);
	cout << " = ";
	printNum(plusNum, c2);
	cout << endl;
	printNum(son1, mum1);
	cout << " - ";
	printNum(son2, mum2);
	cout << " = ";
	printNum(minusNum,c2);
	cout << endl;
}
void multiplyTwo(Loint son1, Loint mum1, Loint son2, Loint mum2)
{
	printNum(son1, mum1);
	cout << " * ";
	printNum(son2, mum2);
	cout << " = ";
	simplifyMaxTwo(son1, mum2);
	simplifyMaxTwo(son2, mum1);
	Loint c1 = son1 * son2;
	Loint c2 = mum1 * mum2;
	printNum(c1, c2);
	cout << endl;
}
void divideTwo(Loint son1, Loint mum1, Loint son2, Loint mum2)
{
	if (son2 != 0)
	{
		printNum(son1, mum1);
		cout << " / ";
		printNum(son2, mum2);
		cout << " = ";
		simplifyMaxTwo(son1, son2);
		simplifyMaxTwo(mum1, mum2);
		if (son2 < 0)
		{
			son2 = abs(son2); son1 = -son1;//前面判断正负由分子决定，son1与c1相关所以需要调换
		}
		Loint c1 = son1 * mum2;
		Loint c2 = son2 * mum1;
		printNum(c1, c2);
		cout << endl;
	}
	else
	{
		printNum(son1, mum1);
		cout << " / ";
		printNum(son2, mum2);
		cout << " = ";
		cout << "Inf";
	}
}
int main()
{
	Loint son1;
	Loint mum1;
	Loint son2;
	Loint mum2;
	cin >> son1;
	getchar();
	cin >> mum1;
	getchar();
	cin >> son2;
	getchar();
	cin >> mum2;
	simplifyMaxTwo(son1, mum1);
	simplifyMaxTwo(son2, mum2);
	plusMinusTwo(son1, mum1, son2, mum2);
	multiplyTwo(son1, mum1, son2, mum2);
	divideTwo(son1, mum1, son2, mum2);
	return 0;
}