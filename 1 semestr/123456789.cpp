#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 int n, a, b;
 cin >> n;
 int arr[n];
 for(int i = 0; i < n; i++)
 {
     cin >> arr[i];
 }
 cin >> a >> b;

   int temp;
 for(int i=0; i<(b-a+1)/2; i++)
 {
  temp = arr[i+a];
  arr[i+a] = arr[b-i];
  arr[b-i] = temp;
 }
 for(int i=0; i<n; i++)
 {
  cout << arr[i] << " ";
 }
 return 0;
}
