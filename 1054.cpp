/*
1054 求平均值
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
bool isLegal(string& s)
{
    int i = 0;
    if (s[0] == '-')
        i++;
    if (!isdigit(s[i]))
        return false;
    i++;
    for (; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            if ((s.size() - i) > 3)
                return false;
            else
            {
                i++;
                for (; i < s.size(); i++)
                {
                    if (!isdigit(s[i]))
                        return false;
                }
            }
        }
        else
        {
            if (!isdigit(s[i]))
                return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int num = 0;
    double sum = 0.0;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if (!isLegal(s))
            cout << "ERROR: " << s << " is not a legal number\n";
        else
        {
            double temp = atof(s.c_str());
            if (temp < -1000.0 || 1000.0 < temp)
                cout << "ERROR: " << s << " is not a legal number\n";
            else
            {
                num++;
                sum += temp;
            }
        }
    }
    if (num)
    {
        cout << "The average of " << num ;
        if (num == 1)
            cout << " number is ";
        else 
            cout << " numbers is ";
        cout << setiosflags(ios::fixed) << setprecision(2) << sum / num;
    }
    else
        cout << "The average of " << num << " numbers is Undefined";
    return 0;
}
