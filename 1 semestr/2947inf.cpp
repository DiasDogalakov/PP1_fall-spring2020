#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 int n;
 cin >> n;
 int h;
 h = 60;
 int d;
 d = 24;
 cout << (n/h)%d << " " << n%h;
 return 0;

}