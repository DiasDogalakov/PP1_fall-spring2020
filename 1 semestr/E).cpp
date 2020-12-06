#include <iostream>   //Min/Max

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int  maxi = -1000000;
    int  mini =  1000000;
    for(int i = 0; i < n; i++)
    { 
         cin >> arr[i];
    }
    for(int i=0; i < n; i++)
    {
         if(arr[i]>maxi)
         maxi=arr[i];
         if(arr[i]<mini)
         mini=arr[i];
    }
     cout << mini << " "<< maxi;
    return 0;
}