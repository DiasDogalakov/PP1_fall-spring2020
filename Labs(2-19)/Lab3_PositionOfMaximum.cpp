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
    int max = -(10^9);
    int pos = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] > max)
        {   
            max = arr[i];
            pos = i;
        }
    }
    cout << pos;
    return 0;
}