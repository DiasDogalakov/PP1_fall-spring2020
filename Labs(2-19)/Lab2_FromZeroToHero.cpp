#include <iostream>
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
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 10 == 0)
        cnt++;
        
    }

    
    
    
    
    
    
    
    
    return 0;
}