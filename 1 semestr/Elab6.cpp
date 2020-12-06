#include <iostream> //HYPOTINUSE //problem E  lab 6
#include <cmath>
#include <stdio.h>

using namespace std;
int main()
{
 int a, b;
 cin >> a >> b;
 double leg_x, leg_y, result;
 leg_x = a;
 leg_y = b;
 result = hypot(leg_x, leg_y);
 cout << result;
 return 0;
}