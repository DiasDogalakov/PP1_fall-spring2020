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
    int num = 0;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        arr[0][i] = arr[i][0] = num++;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            arr[i][j] = arr[0][j]*arr[i][0];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}