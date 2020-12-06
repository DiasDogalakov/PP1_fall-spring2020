#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
 int n;
 cin >> n;
 vector<int> v;
 for(int i = 0; i < n; i++)
 {
     int x;
     cin >> x;
     v.push_back(x);
 }
 reverse(v.begin(), v.end());
 for(int i = 0; i < v.size(); i++)
 {
     cout << v[i] << " ";
 }
 return 0;
}

/*5
input 3 4 1 8 6
output6 8 1 4 3*/