#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 int a, b;
 cin >> a >> b;
 if(a%b==0)
 cout << 1;
 else if(b%a==0)
 cout << 1;
 else
 {
     cout << 0;
 }
 
 return 0;
}