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
    int x;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x] += 1;
    }
    map<int, int>::iterator it;
    int cnt = 0;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
            cnt++;
    }
    if (cnt == 0)
        cout << "YES";
    else
    {
        cout << "NO";
    }
}