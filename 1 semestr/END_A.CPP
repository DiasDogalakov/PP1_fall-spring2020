#include <iostream>
#include <iomanip>
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
    double sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0 && arr[i] % 2 == 0)
        {
            cnt++;
            sum+=arr[i];
        }
    }
    if(cnt == 0)
    {
        cout << 0;
        return 0;
    }
   
    cout << setprecision(6) << fixed << (sum / cnt);
    return 0;
}