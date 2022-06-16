/*
1036 跟奥巴马一起编程
*/
#include <iostream>
using namespace std;
int main()
{
    int N;
    char c;
    cin >> N;
    cin >> c;
    for (int i = 0; i < N; i++)
        cout << c;
    int times = N * 1.0 / 2 + 0.5;
    for (int i = 0; i < times - 2; i++)
    {
        cout << endl;
        cout << c;
        for (int j = 0; j < N - 2; j++)
            cout << " ";
        cout << c;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << c;
    }
    return 0;
}