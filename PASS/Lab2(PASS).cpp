//Lab2

//Odd or Even
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
    if(n == 0)
    cout << "None";
    else if(n % 2 == 0)
    cout << "Even";
    else if(n % 2 != 0)
    cout << "Odd";
    return 0;
}



//Super numbers
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
    if(n % 2 !=0)
    cout << "Super";
    if((n % 2 == 0) && (n>2 && n<=5))
    cout << "Not Super";
    if((n % 2 == 0) && (n>6 && n<20))
    cout << "Super";
    if((n % 2 == 0) && (n>20))
    cout << "Not Super";
    return 0;
}



//Leap year
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



//Steaks
#include <iostream> //PASS
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
    if(n <= k)
    {
        cout << 2;
    }
    else
    {
        if((2 * n) % k == 0)
        cout << (2 * n)/k;
        else
        cout << (((2 * n)/k)+1);
    }
    return 0;
}



//Which one
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
    if(a > b)
    cout << '1';
    else if(a < b)
    cout << '2';
    else if(a == b)
    cout << '0';
    return 0;
}



//Sum
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
    int cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cnt=cnt+i;
    }
    cout << cnt;
    return 0;
}



//Maxi
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int max = 0;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     for(int i = 0; i < n; i++)
     {
         if(arr[i] > max)
         max = arr[i];
     }

    cout << max << endl;
    return 0;
}



//Interesting problem
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int even = 0;
    int odd = 0;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
     cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
         even++;
        else
         odd++;
    }
    cout << even << " " << odd;
    return 0;
}



//Great seven
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
    int cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%10==7)
        cnt++;
    }
    cout << cnt;
    return 0;
}



//From zero to hero
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
    int ans = 0;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt = 0;
        while(x != 0)
        {
            int r = x % 10;
            if(r == 0) cnt ++;
            x /= 10;
        }
        ans += cnt;
    }
    cout << ans << endl;
    return 0;
}



//2Power
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    long long cnt = 1;
    long long n;
    cin >> n;
    while(cnt <= n)
    {
        cout << cnt << " ";
        cnt = cnt * 2;
    }
    return 0;
}



//Bitwise AND
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
    cout << (a & b);
    return 0;
}



//Bitwise OR
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
    cout << (a | b);
    return 0;
}



//Bitwise XOR
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
    cout << (a ^ b);
    return 0;
}