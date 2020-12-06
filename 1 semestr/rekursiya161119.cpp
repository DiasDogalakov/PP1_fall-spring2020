#include <iostream>   //вывести максимальный элеиент через рекурсию.

using namespace std;

int Count1(int n, int m, int cnt)
{
    cin >> n;
    if(n==0)
    return m;
    if(n>m)
    m = n;
    return Count1(n, m, cnt);
}
int main(){  
    int n, m;
    int cnt = 0;
    m = -10000;
    cout << Count1(n, m, cnt);
    return 0;
}