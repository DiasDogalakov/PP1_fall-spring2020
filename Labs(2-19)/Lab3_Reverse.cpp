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
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = n; i >= 1; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}