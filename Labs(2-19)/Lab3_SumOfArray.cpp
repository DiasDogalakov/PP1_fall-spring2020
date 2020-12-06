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
    long int sum = 0;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}