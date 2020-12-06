#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int FOO(int n)
{
    if(n == 0 || n == 1)
     return 1;
    else
     return n*FOO(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << FOO(n);
    return 0;
}