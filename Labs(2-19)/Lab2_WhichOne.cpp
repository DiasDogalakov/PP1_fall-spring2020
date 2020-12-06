#include <iostream> //PASS
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
    if(a > b)
    cout << '1';
    else if(a < b)
    cout << '2';
    else if(a == b)
    cout << '0';
    return 0;
}