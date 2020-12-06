#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
 
int main()
{int n;
cin >> n;
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= n-i; j++){
        cout << "0" << " ";
        }
    
    for(int j = 0; j < n; j++){
    
        if(j==n-i)
        cout << "1" << " ";
        
    }
    for(int j = 1; j < i; j++){
        if(i==n||j==i-1)
        cout << "1" << " ";
       
        else
        cout << "0" <<  " ";
        
    }   
    cout << endl;
}
return 0;
}