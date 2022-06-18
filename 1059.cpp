/*
1059 C语言竞赛
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Person
{
public:
    Person()
    {
        award = 0;
        id = 0;
        isFind = false;
    }
    int award;
    int id;
    bool isFind;
};
int find(int id, Person array[], int N)
{
    for (int i = 1; i < N + 1; i++)
    {
        if (array[i].id == id)
        {
            if (array[i].isFind)
                return -1;
            else
            {
                array[i].isFind = true;
                return array[i].award;
            }
        }
    }
    return -2;
}
void print(int id, int award)
{
    cout << setw(4) << setfill('0') << id << ": ";
    switch (award)
    {
    case 0 :cout << "Minion\n";break;
    case 1 :cout << "Chocolate\n";break;
    case 2 :cout << "Mystery Award\n";break;
    case -2:cout << "Are you kidding?\n"; break;
    case -1:cout << "Checked\n";break;
    default:
        break;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    Person array[10001];
    array[1].award = 2;
    for (int i = 2; i <= N; i++)
    {
        if (array[i].award == 0)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                array[j].award = 1;
            }
        }
    }
    for (int i = 1; i < N + 1; i++)
    {
        cin >> array[i].id;
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int id;
        cin >> id;
        print(id, find(id, array, N));
    }
    return 0;
}