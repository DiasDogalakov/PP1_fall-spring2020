#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if(n % 2 !=0)
    cout << "Super";
    if((n % 2 == 0) && (n>2 && n<=5))
    cout << "Not Super";
    if((n % 2 == 0) && (n>6 && n<20))
    cout << "Super";
    if((n % 2 == 0) && (n>20))
    cout << "Not Super";
    return 0;
}