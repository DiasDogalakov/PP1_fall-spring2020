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
    int cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cnt=cnt+i;
    }
    cout << cnt;
    return 0;
}