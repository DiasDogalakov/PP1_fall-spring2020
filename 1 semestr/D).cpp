#include <iostream>   //Lucky number
using namespace std;

int main ()
{int n;
cin >> n;
if(n % 2==0&&n%5==0)
cout << "YES";
else if(n%2==0&&n%17==0)
cout << "YES";
else if(n%2==0&&n%19==0)
cout << "YES";
else if(n%5==0&&n%17==0)
cout << "YES";
else if(n%5==0&&n%19==0)
cout << "YES";
else if(n%17==0&&n%19==0)
cout << "YES";
else cout << "NO";
return 0;
}