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
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int z;
    cin >> z;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]>=z)
        cnt++;
    }
    cout << cnt;
}