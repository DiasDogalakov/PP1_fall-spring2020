#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int FOO(int a, int b)
{
 int c;
 c = a + b;
 return c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << FOO(a, b);
    return 0;
}