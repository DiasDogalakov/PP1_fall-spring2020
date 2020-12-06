#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int EVENsum = 0;
    int ODDsum = 0;
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(i % 2 == 0)
        EVENsum += str[i] - '0';
        else
        ODDsum += str[i] - '0';
    }
    if(EVENsum == ODDsum)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}