#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, a, sum = 0;
    cin >> n;
    set<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.insert(a);
    }
    for(set<int> :: iterator it = v.begin(); it != v.end(); it++)
    {
        sum +=*it;
    }
    cout << sum << endl;
    return 0;
}