#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int sum(int a, int b)
{
    if(b==0)
    return a;
    if(a>0&&b>0){
        b--;
        a++;
    }
    else if(a>0&&b<0)
    {
        b++;
        a--;
    }
    else if(a<0&&b<0)
    {
        b++;
        a--;
    }
    else
    {
        b--;
        a++;
    }
    return sum(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
}