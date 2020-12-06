#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 int n, m;
 cin >> n >> m;
 n<10000;
 m<10000;
 if(m%n==0)
 cout << m/n;
 else if(m%n!=0)
 cout << m-n;
return 0;
}