/*

*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
void accum(int N)
{
	while (true)
	{
		vector<int>v;
		v.push_back(N / 1000);
		v.push_back(N / 100 % 10);
		v.push_back(N / 10 % 10);
		v.push_back(N % 10);
		sort(v.begin(), v.end());
		int k = (v[3] - v[0]) * 999 + (v[2] - v[1]) * 90;
		if (k == 0)
		{
			cout <<N<< " - "<<N<<" = 0000";
			return;
		}
		cout << v[3] << v[2] << v[1] << v[0] << " - "
			<< v[0] << v[1] << v[2] << v[3] << " = " << setw(4) << setfill('0')<<k<<endl;
		if (k == 6174)
		{
			return;
		}
		N = k;
		v.clear();
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	accum(N);
	return 0;
}
