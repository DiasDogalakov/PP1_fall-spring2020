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
    for(int i = 0; i < n ; i++)
    {
        cin>> arr[i];
        if(arr[i] % 2 != 0)
        cout << arr[i] << " ";
    }
    return 0;
}