#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int cnt[10];
    string s;
    cin >> s;
    for(int i = 0;i < s.size();i ++)
    {
        cnt[s[i] - ’0’] ++;
    }
    int maxi = 0;
    int mini = int(1e9);
    for(int i = 0;i < 9;i ++)
    {
        if(cnt[i] == 0) continue;
        if(cnt[i] > maxi) maxi = cnt[i];
        if(cnt[i] < mini) mini = cnt[i];
    }
    if(maxi == mini) 
    {
        cout << "YES";
    }
    else 
    cout << "NO";
    return 0;
}