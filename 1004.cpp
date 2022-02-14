/*
1004 成绩排名
*/
#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
struct Persion
{
    char name[12];
    char number[12];
    int score;
    Persion()
    {
        memset(name,0,12);
        score = 0;
        memset(number,0,12);
    }
};
ostream& operator<<(ostream& ostream,Persion& persion)
{
    ostream << persion.name << " " << persion.number << "\n";
    return ostream;
}
istream& operator>>(istream& istream,Persion& persion)
{
    istream >> persion.name >> persion.number >> persion.score;
    return istream;
}
int main()
{
    ios::sync_with_stdio(false);
    int n ;
    cin >> n;
    assert(n > 0);
    Persion *p = new Persion[n];
    for(int i = 0; i < n; i++)
        cin >> p[i];
    int max = 0;
    int min = 0;
    for(int i = 0;i < n; i++)
    {
   		if (p[min].score > p[i].score)
			min = i;
		if (p[max].score < p[i].score)
			max = i;
    }
    cout << p[max] << p[min];
    delete []p;
    p = NULL;
    return 0;
}