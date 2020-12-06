#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

int main()
{
 string s;
 cin >> s;
 for(int i = 0; i < s.size(); i++) 
 {
    if(s[i]=='A') cout<<"T";
    if(s[i]=='T') cout<<"A";
    if(s[i]=='C') cout <<"G";
    if(s[i]=='G') cout<<"C";
 }
    return 0;
}