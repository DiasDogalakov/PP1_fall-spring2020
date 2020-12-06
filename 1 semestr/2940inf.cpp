#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int v, t, s;
    cin >> v >> t;
    s = 109;
    s=v*t;
    cout << (s-(v*t)%s)%s; 
    return 0;
}