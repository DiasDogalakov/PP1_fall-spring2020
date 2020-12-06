#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
 bool check_polindrom(string word)
 {
     int n = word.size();
     for(int i = 0; i<n/2; i++)
     {
         if(word[i]!=word[n-i-1])
         {
             return false;
         }
     }
     return true;
 }


 int main()
 {
     string str;
     cin >> str;
     if(check_polindrom(str))
     {
         cout << "yes";
     }
     else 
     {
         cout << "no";
     }
     return 0;
 }