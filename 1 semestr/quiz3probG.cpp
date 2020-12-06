#include <iostream>

using namespace std;

int FOO(int a, int b, int c, int d)
{
 if((a<=c || a<=d) && (b<=c || b<=d))
 cout << "Thanks, Nurbek";
 else
 cout << "Impossible";
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    FOO(a, b, c, d);
    return 0;
}