/*
1067 试密码
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string password;
    int N;
    cin >> password >> N;
    cin.ignore(1024,'\n');
    for (int i = 0; i < N; i++)
    {
        string input;
        getline(cin, input);
        if (input == "#") return 0;
        if (input == password)
        {
            cout << "Welcome in";
            return 0;
        }
        else
        {
            cout << "Wrong password: " << input << '\n';
        }
    }
    cout << "Account locked";
    return 0;
}