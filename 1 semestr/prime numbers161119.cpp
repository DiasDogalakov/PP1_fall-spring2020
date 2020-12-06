#include <iostream>
using namespace std;

int Count1(int n, int m, int cnt)
{
    if(n==1)
    return 1;
    n--;
    if(m%n==0)
    cnt++;
    return cnt + Count1(n, m, cnt);
}
int main(){  
    int n, m;
    cin >> n;
    int cnt = 0;
    m = n;
    if(Count1(n, m, cnt)==2)
    cout << "yes";
    else
    {
        cout << "no";
    }
    return 0;
}
#include <iostream>
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