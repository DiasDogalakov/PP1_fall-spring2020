#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 vector<int>a;
 int n;
 cin >> n;
 for(int i = 0; i < n; i++)
 {   int temp;
     cin >> temp;
     a.push_back(temp); 
 }
 int k;
 cin >> k;
 a.erase(a.begin()+k);
 for(int i = 0; i < a.size(); i++)
 {
     cout << a[i] << " ";
 }

 return 0;
}