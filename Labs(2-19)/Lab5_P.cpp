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
    for(int i = 0; i < str.size(); i++)
    {
        str[i] += 1;
        if(str[i] == 'z')
        str[i] = 'a';
        
    }
    cout << str;
    return 0;
}