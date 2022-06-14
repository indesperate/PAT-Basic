/*
1031 查验身份证
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> Percent =
        {
            7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    vector<char> Charactor =
        {
            '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        bool is_fake = false;
        for (int i = 1; i < 17; i++)
        {
            if (!isdigit(temp[i]))
            {
                v.emplace_back(move(temp));
                is_fake = true;
                break;
            }
        }
        if  (is_fake)
            continue;
        int sum = 0;
        for (int i = 0; i < 17; i++)
            sum += (temp[i] - '0') * Percent[i];
        sum %= 11;
        if (temp[17] != Charactor[sum])
        {
            v.emplace_back(move(temp));
            continue;
        }
    }
    if (v.size() == 0)
        cout << "All passed";
    for (auto & s : v)
        cout << s << "\n";
    return 0;
}