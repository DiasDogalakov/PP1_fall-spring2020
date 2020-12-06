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
    int max = 0;
    int min = 1000000000;
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
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == max)
        arr[i] = min;
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}