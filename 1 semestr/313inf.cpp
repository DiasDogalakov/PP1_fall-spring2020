#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int factrl(int a)
{
    if(a==1)
    return 1;
    return a*factrl(a-1);
}
int FOO(int n, int k, int g)
{
 return (factrl(n))/(factrl(k)*factrl(g));
}
int main()
{
 int n, k;
 cin >> n >> k;
 int g = n - k;
 cout << FOO(n, k, g);
return 0;
}