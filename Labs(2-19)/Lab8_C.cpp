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
    int n, x, y;
    cin >> n;
    vector<int> v;
    for(int i = 0;i < n;i ++)
    {
        int cur;
        cin >> cur;
        v.push_back(cur);
    }
   
    cin >> x >> y;
    
    reverse(v.begin() + x, v.begin() + y + 1);
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}