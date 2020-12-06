#include <iostream>   //Min/Max

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int  maxi = -35;
    for(int i = 0; i < n; i++)
    { 
         cin >> arr[i];
    }
    for(int i=0; i < n; i++)
    {
         if(arr[i]>maxi)
         maxi=arr[i];
    }
     cout << maxi;
    return 0;
}