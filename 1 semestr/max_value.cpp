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
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }

    int max_value = arr[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max_value < arr[i][j])
            {
                max_value = arr[i][j];
            }
        }
    }
    cout << max_value;
    return 0;
}