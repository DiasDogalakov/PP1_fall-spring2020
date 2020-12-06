#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 int n, x, i =1;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << i << " " << *it << endl;
        i++;
    }
    return 0;
}