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
    char bukva;
    int n;
    cin >> str;
    cin >> bukva;
    cin >> n;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == bukva)
        cnt++;
    }
    if(cnt == n)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
}