//Lab3

//Oddlover
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
    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        cin>> arr[i];
        if(arr[i] % 2 != 0)
        cout << arr[i] << " ";
    }
    return 0;
}



//Positive numbers
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
    int arr[n];
    int cnt = 0;
    for(int i = 0; i < n ; i++)
    {
        cin>> arr[i];
    }

    for(int i = 0; i < n ; i++)
    {
        if(arr[i] > 0)
        cnt++;
    }
    cout << cnt;
    return 0;
}



//Maximum in array
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
    int arr[n];
    int max = -(10^9);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }
    cout << max;
    return 0;
}



//Position of maximum
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
    int arr[n];
    int max = -(10^9);
    int pos = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] > max)
        {   
            max = arr[i];
            pos = i;
        }
    }
    cout << pos;
    return 0;
}



//Sum of array
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
    long int sum = 0;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}



//Positive Minimum
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
    int max = 1000000001;
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] > 0)
        {
            if(max < arr[i])
            {
                max = max;
            }
            else if(max > arr[i])
            {
                max = arr[i];
            }
            
        }
    }
    cout << max;
    return 0;
}



//Reverse
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
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = n; i >= 1; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}



//MaxToMin
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
    int max = 0;
    int min = 1000000000;
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
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == max)
        arr[i] = min;
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}



//Sum l...r
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    long long sumOFlr = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = l; i <= r; i++)
    {
        sumOFlr = sumOFlr + arr[i];
    }
    cout << sumOFlr;
    return 0;

}



//Reverse elements on l...r
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    for(int i = 1; i <= n; ++ i)
    {
        cin >> arr[i];
    }
    for(int i = 1; i < l; ++ i)
    {
        cout << arr[i] << " ";
    }
    for(int i = r; i >= l; -- i)
    {
        cout << arr[i] << " ";
    }
    for(int i = r + 1; i <= n; ++ i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}



//How many times?
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

int cnt[26];
int main ()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++ i)
    {
        char x;
        cin >> x;
        cnt[x - ’a’] ++;
    }
    for (int i = 0; i < 26; ++ i)
    {
        if (cnt[i] == 0)
        continue;
        cout << char (i + ’a’) << ’ ’ << cnt[i] << endl;
    }
    return 0;
}



//Upper bound -1?
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int pos;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] <= m)
        pos = i;

    }
    cout << pos;
    return 0;

}



//Duplicates
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
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] != arr[i-1])
        cout << arr[i] << " ";
    }
    return 0;
}



//Merge two arrays
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>

using namespace std;

int main ()
{
    int n, m, k;
    cin >> n;
    int a[500500], b[500500], c[500500];
    for (int i = 1; i <= n; ++ i)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; ++ i)
    {
        cin >> b[i];
    }
    int x = 1, y = 1;
    a[n + 1] = 1e9 + 17;
    b[m + 1] = 1e9 + 17;
    for (int i = 1; i <= n + m; ++ i)
    {
        if (a[x] >= b[y])
        {
            c[i] = b[y];
            ++ y;
        }
        else
        {
            c[i] = a[x];
            ++ x;
        }
    }
    for (int i = 1; i <= n + m; ++ i)
    {
        cout << c[i] << ’ ’;
    }
    return 0;
}



//Infinite?
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, m = 0;
    while(cin >> n)
    {
        m = m + n;
    }
    cout << m;
    return 0;
}



//Square
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
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << (arr[i] * arr[i]) << " ";
    }
    return 0;
}



//Sort
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>

using namespace std;

int main ()
{
    int n, a[500500];
    cin >> n;
    for (int i = 1; i <= n; ++ i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++ i)
    {
        for (int j = 1; j <= n; ++ j)
        {
            if (a[i] >= a[j])
            swap (a[i], a[j]);
        }
    }
    for (int i = 1; i <= n; ++ i)
    {
        cout << a[i] << ’ ’;
    }
    return 0;
}



//Is it square?
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
    double x = sqrt(n);
    int y = x;
    if(y * y == n)
    cout << "Yes";
    else
    cout << "No";
    return 0;
}



//Is it Prime?
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

int main () {
int n;
cin >> n;
if (n == 1) {
cout << "No";
return 0;
}
for (int i = 2; i * i <= n; ++ i) {
if (n % i == 0) {
cout << "No";
return 0;
}
}
cout << "Yes";
return 0;
}