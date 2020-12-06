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
    int cnt = 0;
    for(int i = 0; i < n ; i++)
    {
        cin>> arr[i];
    }

    for(int i = 0; i < n ; i++)
    {
        if(arr[i] > 0)
        cnt++;
    }
    cout << cnt;
    return 0;
}