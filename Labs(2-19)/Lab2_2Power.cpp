#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    long long cnt = 1;
    long long n;
    cin >> n;
    while(cnt <= n)
    {
        cout << cnt << " ";
        cnt = cnt * 2;
    }
    return 0;
}
