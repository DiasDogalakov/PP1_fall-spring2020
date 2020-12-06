/*#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int FOO( int n, int arr[n], int arr[i], int x)
{
    if(arr[i] == x)
    cout << x;
    return arr[i+1];
 
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << FOO(n, arr[n], arr[i], x);
 
return 0;
}*/

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int FOO(int n, int arr[n], int x)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        cout << "Yes";
    }
    return arr[i+1];
    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[n];
    int x;
    cin >> x;
    cout << FOO(n, arr[n], x);
    return 0;
}