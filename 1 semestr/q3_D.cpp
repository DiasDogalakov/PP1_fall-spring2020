#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int j = 1; j < 2; j++){
        int g = 1;
    for(int i = 1; i <= n; i++)
    {
        
        if(n-i>0){
       if(n-i>0)
       n = n - i;
       else if(n-i <= 0){
       g=1;
       break;
       }
       
       if(n-2*i>0)
       n = n - 2*i;
       else if(n-2*i<=0){
       g=0;
       break;
       }
       }
    }
    if(g==1)
    cout << "Bob";
    else
    {
        cout << "Nelson";
    }
    

    }
    
    return 0;
}