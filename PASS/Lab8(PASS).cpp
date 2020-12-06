// Lab 8

// A
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}



// B
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}



// C
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, x, y;
    cin >> n;
    vector<int> v;
    for(int i = 0;i < n;i ++)
    {
        int cur;
        cin >> cur;
        v.push_back(cur);
    }
   
    cin >> x >> y;
    
    reverse(v.begin() + x, v.begin() + y + 1);
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}



// D
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, k, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    v.erase(v.begin()+k);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}



// E
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, a, b, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> a >> b;
    v.erase(v.begin()+a, v.begin()+b+1);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";  
    }
    return 0;
}



// F
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, k, a, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k >> a;
    v.insert(v.begin()+k, a);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}



// G
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 

bool isPrime(int n)
{
    if(n == 1) return false;
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
    
int main()
{
    int n, k, a, cnt = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >> k;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] > k && isPrime(v[i]))
        cnt++;
    }
    cout << cnt;
    return 0;
}



// H
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, k, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}



// I
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, k, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    if(find(v.begin(), v.end(), k) != v.end())
        cout << "Yes";
    else
        cout << "No";
    return 0;
}



// J
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1]-v[0] << endl;
    return 0;
}



// K
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;

int main()
{
    int n, k, x, sum = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}



// L
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <list>
 
using namespace std;
 
int main()
{
    int n, a;
    cin >> n;
    set<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.insert(a);
    }
    cout << v.size() << "\n";
    return 0;
}



// M
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, a, sum = 0;
    cin >> n;
    set<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.insert(a);
    }
    for(set<int> :: iterator it = v.begin(); it != v.end(); it++)
    {
        sum +=*it;
    }
    cout << sum << endl;
    return 0;
}



// N
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, a;
    cin >> n;
    set<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.insert(a);
    }
    for(set<int> :: iterator it = v.begin(); it != v.end(); it++)
    {
        if(*it % 2 != 0)
        cout << *it << " ";
    }
    return 0;
}



// O
#include <iostream> //PASS
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
    set<int> v;
    for(int i = 0; i < s.size(); i++)
    {
        v.insert(tolower(s[i]));
    }
    cout << v.size() << endl;
    for(set<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << (char)*it << " ";
    }
    cout << endl;
    return 0;
}