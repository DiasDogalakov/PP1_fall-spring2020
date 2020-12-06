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
    int n, k, x, sum = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}