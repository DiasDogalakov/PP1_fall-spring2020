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
    int max = -1e9-17;
    int second = -1e9-17;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] > max)
            {
                second = max;
                max = arr[i][j];
            }

            else if(arr[i][j] > second && arr[i][j] != max)
            {
                second = arr[i][j];
            }
        }
    }
    if(second == -1e9-17)
    cout << 0;
    else
    cout << second;
    return 0;
}