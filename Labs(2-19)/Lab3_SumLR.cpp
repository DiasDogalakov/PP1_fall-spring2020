#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    long long sumOFlr = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = l; i <= r; i++)
    {
        sumOFlr = sumOFlr + arr[i];
    }
    cout << sumOFlr;
    return 0;

}