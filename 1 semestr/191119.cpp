#include <iostream>
using namespace std;
int foo()
{
    cout << "Hi, I am function!!!";
    return 0;
}

int sum(int a, int b)
{
 int result;
 result = a + b;
 return result;
}

int main()
{
    int c;
    c = sum(2, 5);
    cout << c << endl;
}