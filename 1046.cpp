/*
1046 划拳
*/
#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
	cin >> N;
	int aHan;
	int aHua;
	int bHan;
	int bHua;
	int aHe=0;
	int bHe=0;
	for (int i = 0; i < N; i++) {
        cin >> aHan >> aHua >> bHan >> bHua;
		int sum = aHan + bHan;
		if (sum == aHua && sum != bHua)bHe++;
		if (sum != aHua && sum == bHua)aHe++;
	}
	cout << aHe << " " << bHe;
    return 0;
}