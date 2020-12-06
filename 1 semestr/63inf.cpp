#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 int n, a, b, c, d;
 cin >> n >> a >> b >> c >> d;
 int arr[n];
 int temp;
 for(int i = 0; i<9; i++)
 {
      arr[i]=i+1;
 }
 for(int i=0; i<(b-a)/2+1; i++)
 {
  temp = arr[i+a -1];
  arr[i+a-1] = arr[b-i-1];
  arr[b-i-1] = temp;
 }
  for(int i=0; i<(d-c)/2+1; i++)
 {
  temp = arr[i+c-1];
  arr[i+c-1] = arr[d-i-1];
  arr[d-i-1] = temp;
 }
 for(int i = 0; i<9; i++)
 {
      cout << arr[i] << " ";
 }
 return 0;
}