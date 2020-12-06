#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 string str;
 cin >> str;
 for(int i = 0; i< str.size(); i++)
 {
     if(str[i] >=65 && str[i]<=90)
     str[i] = str[i]+32;
     else
     {
         str[i]=32;x
     }
   cout << str << " ";

     
 }
 return 0;
}