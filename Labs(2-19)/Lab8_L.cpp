#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <list>
 
using namespace std;
 
int main()
{
    int n, a;
    cin >> n;
    set<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.insert(a);
    }
    cout << v.size() << "\n";
    return 0;
}