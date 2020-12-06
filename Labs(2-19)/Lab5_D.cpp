#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
bool check(string str)
{
    int len = str.length();
    for(int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
		{
			return false;
		}
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    if(check(str))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}