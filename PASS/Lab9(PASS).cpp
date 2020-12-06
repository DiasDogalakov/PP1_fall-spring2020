// Lab 9

// A
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    pair<int, int> a[2222];
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n);
    for(int i = 0; i < n; ++i)
        cout << a[i].first << " " << a[i].second << "\n";
    return 0;
}



// B
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
    if(a % 2 == 0 && b % 2 == 1) return true;
    if(b % 2 == 0 && a % 2 == 1) return false;
    if(a % 2 == 0 && b % 2 == 0) return b < a;
    if(a % 2 == 1 && b % 2 == 1) return a < b;
}
int main()
{
    int n;
    int a[111];
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n, cmp);
    for(int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}



// C
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    map<int, int> q;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        q[x]++;
    }
    int ans = 0;
    for(map<int, int> :: iterator it = q.begin(); it !=q.end(); ++it)
    {
        if(it->second > 1) ans++;
    }
    cout << ans << "\n";
    return 0;
}



// D
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n, k;
    map<int, int> q;
    cin >> n >> k;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        q[x]++;
    }
    cout << q[k] << "\n";
    return 0;
}



// E
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    map<string, int> q;
    cin >> n;
    for(int i = 0; i < n; ++i){
    string s;
    cin >> s;
    q[s]++;
    }
    int ans = 0;
    for(map<string,int> :: iterator it = q.begin(); it != q.end(); ++it)
    {
        if(it->second == 3) ans++;
    }
    cout << ans << "\n";
    return 0;
}



// F
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    stack<char> st;
    cin >> s;
    for(int i = 0; i < (int)s.size(); ++i)
    {
        if(s[i] == ’(’) st.push(’(’);
        else if(s[i] == ’)’)
        {
            if(st.size() == 0)
            {
                cout << "NO\n";
                return 0;
            }
            else if(st.top() == ’)’)
            {
                cout << "NO\n";
                return 0;
            }
            else st.pop();
        }
    }
    if(st.size() == 0)
    cout << "YES\n";
    else
    cout << "NO\n";
    return 0;
}



// G
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    stack<char> st;
    cin >> s;
    for(int i = 0; i < s.size(); ++i)
    {
        if(!st.size())
        st.push(s[i]);
        else if(st.top() == ’1’ && s[i] == ’1’)
        {
            st.pop();
        }
        else st.push(s[i]);
    }
    string ans = "";
    while(st.size()){
    ans += st.top();
    st.pop();
    }
    for(int i = (int)ans.size() - 1; i >= 0; --i)
    cout << ans[i];
    return 0;
}



// H
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    map<string, int> q;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        if(!q[s])
        q[s] = i;
    }
    for(map<string, int> :: iterator it = q.begin(); it != q.end(); ++it)
    {
        cout << it->first << " " << it->second << "\n";
    }
    return 0;
}



// I
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    map<string, int> q;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        if(q[s] == 1)
        cout << "user already exists\n";
        else
        cout << "new user added\n";
        q[s] = 1;
    }
    return 0;
}



// J
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    map<string, int> q;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        string s;
        int k;
        cin >> s >> k;
        q[s] += k;
    }
    for(map<string,int> :: iterator it = q.begin(); it != q.end(); ++it)
    {
        cout << it->first << " " << it->second << "\n";
    }
    return 0;
}



// L
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    pair<int, int> a[555];
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        a[i].first = x + y;
        a[i].second = i + 1;
    }
    sort(a, a + n);
    for(int i = 0; i < n; ++i)
        cout << a[i].second << " ";
    return 0;
}



// M
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
    queue<string> q;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int type;
        cin >> type;
        if(type == 2)
        q.pop();
        else
        {
            string s;
            cin >> s;
            q.push(s);
        }
        if(!q.empty())
            cout << q.front() << "\n";
        else
            cout << "queue is empty\n";
    }
    return 0;
}



// N
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    int a[1111];
    map<int, int> q;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        q[a[i]] = 1;
    }
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < i; ++j)
        if(q[a[i]^a[j]])
        ans++;
    }
    cout << ans << "\n";
    return 0;
}



// O
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n, m;
    map<string, string> q;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        string login, password;
        cin >> login >> password;
        q[login] = password;
    }
    cin >> m;
    while(m--)
    {
        string login, password;
        cin >> login >> password;
        if(!q.count(login))
        cout << "login error\n";
        else if(q[login] != password)
        cout << "password error\n";
        else
        cout << "correct password\n";
    }
    return 0;
}