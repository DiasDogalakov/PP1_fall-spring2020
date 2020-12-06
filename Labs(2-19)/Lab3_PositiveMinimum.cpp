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
    int max = 1000000001;
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] > 0)
        {
            if(max < arr[i])
            {
                max = max;
            }
            else if(max > arr[i])
            {
                max = arr[i];
            }
            
        }
    }
    cout << max;
    return 0;
}