#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 int a, b, c, d;
 cin >> a, b, c, d;
 if(a*b <= c*d)
 {
     cout << "Thanks, Nurbek";
 }
 if(a*b > c*d)
 {
     cout << "Impossible";
 }
 return 0;
}