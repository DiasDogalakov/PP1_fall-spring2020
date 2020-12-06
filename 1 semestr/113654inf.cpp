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
    int cnt = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        cnt++;
    }
    cout << cnt;
}