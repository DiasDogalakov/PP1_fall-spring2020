#include <iostream>  //Interesting array 

using namespace std;

int main()
{int n;
 cin >> n;
 int arr[n];
 for(int i = 0; i < n; i++)
   { 
         cin >> arr[i];
   }
 for(int i = 0; i < n; i++)
   {
    if (arr[i] < arr[i]+1)
    cout << "Interesting";
   }
 for(int i = 0; i < n; i++)
   {
     if (arr[i] > arr[i]+1)
      cout << "Not interesting";
   }
   return 0;
}
  
  
    