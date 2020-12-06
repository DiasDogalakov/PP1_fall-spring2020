//Lab5

// A
#include <iostream>
using namespace std;
int main()
{

    int CNT = 0;
    int cnt = 0;
    string s;
    cin >> s;
    for(int i = 0;i < s.size();i++)
        {
            if(s[i] >=  65 && s[i] <= 90)
               CNT++;
            else
                cnt++;
        }
        cout << cnt << " " << CNT << endl;
    return 0;
}



// B
#include <iostream>
using namespace std;
int main(){

    string s;
    cin >> s;

        for(int i = 0;i < s.size();i++)
            if(s[i] >= 97 && s[i] <= 122)
                s[i] = s[i] - 32;
        cout << s;
    return 0;
}



// C
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string s,t;
    cin >> s >> t;
    for(int i = 0;i + (int)t.size() - 1 < s.size();i ++)
    {
        string cur = s.substr(i,(int)t.size());
        if(cur == t)
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
    return 0;
}



// D
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
bool check(string str)
{
    int len = str.length();
    for(int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
		{
			return false;
		}
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    if(check(str))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}



// E
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int EVENsum = 0;
    int ODDsum = 0;
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(i % 2 == 0)
        EVENsum += str[i] - '0';
        else
        ODDsum += str[i] - '0';
    }
    if(EVENsum == ODDsum)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}



// F
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string s,t;
    int l,r;
    cin >> s >> l >> r;
    for(int i = l;i <= r;i ++)
    cout << s[i];
    return 0;
}



// G
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    if(str1 == str2)
    cout << "YES";
    else
    cout << "NO";
    return 0;    
}



// H
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int cnt[10];
    string s;
    cin >> s;
    for(int i = 0;i < s.size();i ++)
    {
        cnt[s[i] - ’0’] ++;
    }
    int maxi = 0;
    int mini = int(1e9);
    for(int i = 0;i < 9;i ++)
    {
        if(cnt[i] == 0) continue;
        if(cnt[i] > maxi) maxi = cnt[i];
        if(cnt[i] < mini) mini = cnt[i];
    }
    if(maxi == mini) 
    {
        cout << "YES";
    }
    else 
    cout << "NO";
    return 0;
}



// I
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    const int N = 100100;
    string s;
    string t;
    int cnt[N],cnt1[N];
    cin >> s >> t;
    for(int i = 0;i < s.size();i ++)
    {
        cnt[s[i] - ’a’] ++;
    }
    for(int i = 0;i < t.size();i ++)
    {
        cnt1[t[i] - ’a’] ++;
    }
    for(char i = ’a’;i <= ’z’;i ++)
    {
        if(cnt[i - ’a’] != cnt1[i - ’a’])
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}



// J
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
bool check(string str)
{
    int len = str.length();
    for(int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
		{
			return false;
		}
    }
    return true;
}



int main()
{
    char bukva;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        bukva = str[0];
    }
    str += bukva;
    if(check(str))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}



// K
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int cnt = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a')
        cnt++;
        else if(str[i] == 'e')
        cnt++;
        else if(str[i] == 'i')
        cnt++;
        else if(str[i] == 'o')
        cnt++;
        else if(str[i] == 'u')
        cnt++;
    }
    cout << cnt;
    return 0;
}



// L
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    char cur = s[0];
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == cur) continue;
        if(s[i] > cur) cur = s[i];
        else
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}



// M
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int cnt = 0;
    string str;
    char bukva;
    int n;
    cin >> str;
    cin >> bukva;
    cin >> n;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == bukva)
        cnt++;
    }
    if(cnt == n)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
}



// N
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    string Welcome = "Welcome ";
    cout << Welcome + str;
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
 
int main()
{
    string s;
    cin >> s;
    char ans = s[0];
    for(int i = 1; i < s.size(); i ++)
    {
        ans = max(ans,s[i]);
    }
    cout << ans;
    return 0;
}



// P
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        str[i] += 1;
        if(str[i] == 'z')
        str[i] = 'a';
        
    }
    cout << str;
    return 0;
}



// Q
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
bool check(string str1, string str2)
{
    if(str1.find(str2))
    {
        return true;
    }
    return false;
}



int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    if(check(str1, str2))
    cout << "YES";
    else
    cout << "NO";
    return 0;
}