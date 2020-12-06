#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
double FOO(int a, int b)
{
    double c = sqrt(a*a + b*b);
    return c;
 
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout<<setprecision(4)<<FOO(a, b);
 
return 0;
}