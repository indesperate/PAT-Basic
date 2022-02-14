/*
1003 我要通过！
*/
#include<iostream>
#include<string>
using namespace std;
bool testPAT()
{
    char str[100] = {0};
    cin >> str;
	int np=0;//the number of p
	int nt=0;//the number of t
	int abefore = 0;//the number of a before p
	int ain = 0;//the number of a in pt
	int aafter = 0;//the number of a after t
	for (int i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
		case 'A':
		{
			if (np == 0)
				abefore++;
			else
			{
				if (nt == 0)
					ain++;
				else
					aafter++;
			}
			break;
		}
		case 'P':
		{
			if (np != 0)
				return false;
			np++;
			break;
		}
		case 'T':
		{
			if (np != 1 && nt != 0)
				return false;
			nt++;
			break;
		}
		default:
            return false;
		}
	}
	if ((abefore*ain == aafter) && ain!=0 && nt!=0 && np!=0)//the format must match
		return true;
	else
		return false;
}
int main()
{
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
	{
		if (testPAT())
			cout << "YES"<<endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}