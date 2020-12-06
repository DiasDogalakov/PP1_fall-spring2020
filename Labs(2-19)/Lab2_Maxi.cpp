#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int max = 0;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     for(int i = 0; i < n; i++)
     {
         if(arr[i] > max)
         max = arr[i];
     }

    cout << max << endl;
    return 0;
}