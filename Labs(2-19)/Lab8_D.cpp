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
    int n, k, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    v.erase(v.begin()+k);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}