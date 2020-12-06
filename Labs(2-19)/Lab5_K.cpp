#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int cnt = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a')
        cnt++;
        else if(str[i] == 'e')
        cnt++;
        else if(str[i] == 'i')
        cnt++;
        else if(str[i] == 'o')
        cnt++;
        else if(str[i] == 'u')
        cnt++;
    }
    cout << cnt;
    return 0;
}