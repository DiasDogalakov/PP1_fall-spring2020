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
    int l,r;
    cin >> s >> l >> r;
    for(int i = l;i <= r;i ++)
    cout << s[i];
    return 0;
}