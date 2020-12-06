#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    const int N = 100100;
    string s;
    string t;
    int cnt[N],cnt1[N];
    cin >> s >> t;
    for(int i = 0;i < s.size();i ++)
    {
        cnt[s[i] - ’a’] ++;
    }
    for(int i = 0;i < t.size();i ++)
    {
        cnt1[t[i] - ’a’] ++;
    }
    for(char i = ’a’;i <= ’z’;i ++)
    {
        if(cnt[i - ’a’] != cnt1[i - ’a’])
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}