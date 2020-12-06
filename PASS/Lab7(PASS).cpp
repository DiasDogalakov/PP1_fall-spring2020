// Lab 7

// A
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

int f(int d, int v, int n){
    if(d == n) return v;
    return f(d + 1, v * 2, n);
}

int main()
{
    int n;
    cin >> n;
    cout << f(0, 1, n) << endl;
    return 0;
}



// B
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

void rec(int n){
    if(n == 0) return;
    rec(n / 2);
    cout << n % 2;    
}

int main(){
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        rec(n);
        cout << endl;
    }
    return 0;
}



// C
#include <iostream>

using namespace std;

string rec(int l, int r, int a[], int x)
{
    if(l <= r)
    {
        int m = (l+r)/2;
        if(a[m] == x)return "Yes";
        if(a[m] < x)return rec(m+1, r, a, x);
        return rec(l, m-1, a, x);
    }
    return "No";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)cin>>a[i];
    int x;
    cin>>x;
    cout<<rec(0, n-1, a, x);
}



// D
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int rec(string s, int i, int ans)
{
    if(i == s.size())
    return ans;
    ans += s[i] - ’0’;
    return rec(s, i + 1, ans);
}

int main()
{
    string s;
    cin>>s;
    cout<<rec(s,0, 0);
}



// E
#include <iostream>

using namespace std;

string rec(int n)
{
    if(n==1)
        return "Yes";
    if(n % 2 != 0)
        return "No";
    return rec(n/2);
}
int main()
{
    long long n;
    cin>>n;
    cout<<rec(n);
}



// F
#include <iostream>

using namespace std;

int rec(string s, int i, int ans)
{
    if(i == s.size())
        return ans;
    if(int(s[i] - ’0’) % 2 == 0)
        return rec(s, i+1, ans+1);
    return rec(s, i+1, ans);
}
int main()
{
    string s;
    cin >> s;
    cout<<rec(s, 0, 0);
}



// G
#include <iostream>

using namespace std;

long long rec(long long a, int n)
{
    if(n == 0)return a;
    a *= n;
    return rec(a, n-1);
}

int main()
{
    int n;
    cin>>n;
    long long a = 1;
    cout<<rec(a, n);
}



// H
#include <iostream>

using namespace std;

long long rec(long long a, long long b, int cur)
{
    if(cur == 1)
    {
        return a+b;
    }
    long long c = a+b;
    return rec(b, c, cur-1);
}
int main()
{
    int n;
    cin>>n;
    long long a = 0, b = 1;
    if(n == 1)cout<<0, exit(0);
    if(n == 2)cout<<1, exit(0);
    cout<<rec(a, b, n-2);
}



// I
#include <iostream>

using namespace std;

long long rec(long long ans)
{
    int n;
    cin>>n;
    ans+=n;
    if(!n)return ans;
    return rec(ans);
}

int main()
{
    cout<<rec(0);
}



// J
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int rec(int sum, int n)
{
    if(n == 0)
    {
        return sum;
    }
    sum += (n % 10)/2;
    return rec(sum, n/10);
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    cout << rec(sum, n);
    return 0;
}



// K
#include <iostream>

using namespace std;

int rec(string s, int i, char ans)
{
    if(i == s.size())return ans;
    ans = max(ans, s[i]);
    return rec(s, i+1, ans);
}

int main()
{
    string s;
    cin >> s;
    cout<<char(rec(s, 0, ’0’));
}



// L
#include <iostream>

using namespace std;

string rec(string s, int i, int j)
{
    if(i > j)
    return "Yes";
    if(s[i] != s[j])
    return "No";
    return rec(s, i+1, j-1);
}

int main()
{
    string s;
    cin >> s;
    int i = 0, j = s.size() - 1;
    cout <<rec(s, i, j);
}



// M
#include<iostream>

using namespace std;

void recursion(int cur, int n)
{
    if(cur > n)return;
    cout<<cur<<’ ’;
    recursion(cur+1, n);
}

int main()
{
    int n;
    cin >> n;
    recursion(1, n);
    return 0;
}



// N
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isCheater(vector<int> v, int n, int k, int i) {
    if(i == 0) {
        return isCheater(v, n, k, i + 1);
    } else {
        if(i == n) {
            return false;
        } else {
            if(v[i] - v[i-1] <= k) {
                return true;
            } else {
                return isCheater(v, n, k, i + 1);
            }
        }
    }
}

int main() {
    int n, k;
    vector<int> v;
    cin>>n>>k;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if(isCheater(v, n, k, 0)) {
        cout<<"cheater"<<endl;
    } else {
        cout<<"no"<<endl;
    }

    return 0;
}



// O
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
char get(int a)
{
    if(a >= 10)
    {
        return ’A’+a-10;
    }
    return a+’0’;
}

void rec(int n, int k)
{
    if(n == 0)return;
    rec(n/k, k);
    cout << get(n%k);
}

int main()
{
    int n, k;
    cin >> n >> k;
    rec(n, k);
}