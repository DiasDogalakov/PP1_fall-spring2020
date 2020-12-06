#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    set<char> se;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        se.insert(str[i]);
    }
    set<char>::iterator it;
    for(it=se.begin(); it!=se.end(); it++)
    {
        cout << *it;
    }
}