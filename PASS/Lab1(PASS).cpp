//Lab 1

//A+B
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b;
    return 0; 
}



//Code
#include <iostream>//PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    cout << n + (k % 10 + k / 100);
    return 0; 
}



//Bits
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
    int m = 0;
    int k = 1;
    for(int i = 3; i >= 0; i--)
    {
        if((n & (1 << i)) > 0)
        {
            m = m + k;
        }
        k *= 2;
    }
    cout << m;
    return 0;
}



//Root
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
    cout << sqrt(n);
    return 0;
}
