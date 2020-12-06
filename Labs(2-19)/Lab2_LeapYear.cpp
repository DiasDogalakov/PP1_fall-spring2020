#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        if (n % 100 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (n % 400 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
