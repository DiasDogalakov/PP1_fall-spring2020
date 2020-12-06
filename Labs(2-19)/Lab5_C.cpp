#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string s,t;
    cin >> s >> t;
    for(int i = 0;i + (int)t.size() - 1 < s.size();i ++)
    {
        string cur = s.substr(i,(int)t.size());
        if(cur == t)
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
    return 0;
}