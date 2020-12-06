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
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}