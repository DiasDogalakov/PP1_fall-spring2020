#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
bool check(string str1, string str2)
{
    if(str1.find(str2))
    {
        return true;
    }
    return false;
}



int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    if(check(str1, str2))
    cout << "YES";
    else
    cout << "NO";
    return 0;
}