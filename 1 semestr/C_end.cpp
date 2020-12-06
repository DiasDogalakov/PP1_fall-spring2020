#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    string str;
    int x;
    int sum = 0;
    for(int i = 0 ; i < n; i++)
    {
        cin >> str >> x;
        m[str] += x;
        sum+=x;
    }
    map<string, int>::iterator it;
    multiset<pair <float, string> > mul;
    for(it = m.begin(); it != m.end(); it++)
    {
        pair<float, string> p1 = make_pair(it->second, it->first);
        mul.insert(p1);
    }
    multiset<pair <float, string> >::reverse_iterator it1;
    for(it1 = mul.rbegin(); it1 != mul.rend(); it1++)
    {
        cout << (it1->first*100)/sum << " " << it1->second << endl;
    }
}