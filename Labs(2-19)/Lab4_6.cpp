#include <iostream> //PASS  
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, row, col, max = -1e9-17;
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
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << ++row << " " << ++col << endl;
    return 0;


}