#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

int f(int d, int v, int n){
    if(d == n) return v;
    return f(d + 1, v * 2, n);
}

int main()
{
    int n;
    cin >> n;
    cout << f(0, 1, n) << endl;
    return 0;
}