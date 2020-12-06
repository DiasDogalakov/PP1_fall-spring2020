#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    char cur = s[0];
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == cur) continue;
        if(s[i] > cur) cur = s[i];
        else
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}