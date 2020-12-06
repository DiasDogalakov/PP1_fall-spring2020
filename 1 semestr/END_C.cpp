#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 int i, j, n;
 int arr[i][j];
 cin >> arr[i][j];
 for(int i = 0; i < n; i++)
 {
   for(int j = 0; j < n; j++)
   {
     for(int ii = 0; ii < n; ii++)
     {
       if(arr[i][j]> arr[ii][j])
       swap (arr[i][j] ,arr[ii][j]);

     }
   }
 }
 for(int j = 0; j < n; j++)
 {
   for(int ii = 0; ii < n; ii++){

   }
 }
 


  return 0;
}
}