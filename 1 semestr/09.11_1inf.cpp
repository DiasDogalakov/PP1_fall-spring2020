#include <iostream>                  
#include <vector>

using namespace std;

int main()
{
 int n;
 cin >> n;
 int arr[n];
 cin >> arr[n];
 int maxi = -1000000;
 int mini = 1000000;
 vector<int> v;
   for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    v.push_back(i);
   
   for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    return 0;
}