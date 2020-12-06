// Lab 10

// A
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string students[n];
    int grades[n];
    for(int i = 0; i < n; i++) {
        cin>>students[i];
        cin>>grades[i];
    }
    sort(students, students + n);
    sort(grades, grades + n);
    for(int i = 0; i < n; i++) {
        cout<<students[i]<<" "<<grades[i]<<endl;
    }
    return 0;
}



// B
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
    int n;
    cin>>n;
    vector<int> v;
    set<int> s;
    int k;
    int x;
    for(int i =0;i<n;i++)
    {
        cin>>k;
        x = s.size();
        s.insert(k);
        if(x!=s.size())
        {
            v.push_back(k);
        }
    }
    do
    {
        for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    while(next_permutation(v.begin(),v.end()));
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
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    reverse(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[n-1-i])
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"Instead of "<<a[i]<<" here was "<<b[i]<<endl;
        }
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
    int n;
    int m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, a+n);
    rotate(a, a+n-m, a+n);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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

bool isPrime(int n)
{
    if(n<0)
    {
        n*=-1;
    }
    if(n==1 || n==0)
    {
        return false;
    }
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    int x = count_if(a,a+n,isPrime);
    cout<<x<<endl;
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
    int n;
    cin>>n;
    int sn = (1+n)*n/2;
    vector<int> v(sn);
    int sum=0;
    for(int i =1;i<=n;i++)
    {
        fill(v.begin()+sum,v.begin()+sum+i,i);
        sum+=i;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}



// G
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    int k;
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        v1.push_back(k);
    }
    for(int i = 0;i<m;i++)
    {
        cin>>k;
        v2.push_back(k);
    }
    vector<int>:: iterator it1;
    vector<int>:: iterator it2;
    it1 = unique(v1.begin(),v1.end());
    it2 = unique(v2.begin(),v2.end());
    v1.resize(distance(v1.begin(),it1));
    v2.resize(distance(v2.begin(),it2));
    vector<int> v(v1.size() + v2.size());
    for(int i = 0;i<v.size();i+=2)
    {
        v[i] = v1[i/2];
    }
    for(int i = 1;i<v.size();i+=2)
    {
        v[i] = v2[i/2];
    }
    vector<int>:: iterator it;
    it = unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}



// H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(vector<int> v)
{
    for(int i = 0;i<v.size()/2;i++)
    {
        if(v[i]!=v[v.size()-1 - i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int x;
    for(int i = 0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    do
    {
        if(isPalindrome(v))
        {
            for(int i = 0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            return 0;
        }
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<"Impossible"<<endl;
    return 0;
}



// I
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void convert(int n)
{
    string s = "";
    if(n==0) s = "0";
    while(n!=0){
    s+=char(n%2+48);
    n/=2;
    }
    for(int i =0;i<s.size()/2;i++){
    swap(s[i],s[s.size()-1-i]);
    }
    cout<<s<<endl;
}
int main(){
int n;
cin>>n;
int x;
vector<int> v;
for(int i = 0;i<n;i++){
cin>>x;
v.push_back(x);
}
for_each(v.begin(),v.end(),convert);
return 0;
}



// J
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int x = 0;
long long npower(){
long long y = pow(x,x);
++x;
return y;
}
int main(){
int n;
cin>>n;
vector<long long> v(n+1);
generate(v.begin(),v.end(),npower);
for(int i = 0;i<v.size();i++){
cout<<v[i]<<" ";
}
cout<<endl;
return 0;
}



// K
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool isSquare(char top, char c)
{
    if(top == ’0’) return false;
    int k = (top-48)*10 + (c-48);
    if(sqrt(k) == int(sqrt(k))){
    return true;
    }else{
    return false;
    }
}
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i = 0;i<s.size();i++){
    if(!st.empty()){
    if(isSquare(st.top(),s[i])){
    st.pop();
    }else{
    st.push(s[i]);
    }
    }else{
    st.push(s[i]);
    }
    }
    if(st.empty()){
    cout<<"Stack is empty"<<endl;
    return 0;
    }
    while(!st.empty()){
    cout<<st.top();
    st.pop();
    }
    return 0;
}



// L
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool newsort(vector<int> v1,vector<int> v2)
{
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i<v1.size();i++)
    {
        sum1+=v1[i];
    }
    for(int i = 0;i<v2.size();i++)
    {
        sum2+=v2[i];
    }
    if(sum1>sum2)
    {
        return false;
    }
    else
    {
        if(sum1<sum2)
        {
            return true;
        }
        else
        {
            if(v1.size()>v2.size())
            {
                return false;
            }
            else
            {
                if(v1.size()<v2.size())
                {
                    return true;
                }
                else
                {
                    for(int i = 0;i<v1.size();i++)
                    {
                        if(v1[i]>v2[i])
                        {
                            return false;
                        }
                        else
                        {
                            if(v1[i]<v2[i])
                            {
                                return true;
                            }
                        }
                    }
                    return true;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int> > v;
    int m;
    for(int i =0;i<n;i++)
    {
        cin>>m;
        vector<int> vm;
        int k;
        for(int i = 0;i<m;i++){
        cin>>k;
        vm.push_back(k);
        }
        v.push_back(vm);
    }
    sort(v.begin(),v.end(),newsort);
    for(int i = 0;i<v.size();i++)
    {
        for(int j = 0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// M
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    map<string,double> mp;
    int total = 0;
    string s;
    int x;
    for(int i =0;i<n;i++)
    {
        cin>>m;
        for(int j = 0;j<m;j++)
        {
            cin>>s>>x;
            mp[s]+=x;
            total+=x;
        }
    }
    map<string,double>::iterator it;
    for(it = mp.begin();it!=mp.end();it++)
    {
        (*it).second = (*it).second/total * 100;
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}



// N
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    double a[101];
    int n;
    cin>>n;
    int at1,at2,final,cr;
    double ksum = 0;
    for(int i = 0;i<50;i++){
    a[i] = 0;
    }
    double cnt = 1.0;
    for(int i = 50;i<100;i+=5){
    a[i] = cnt;
    a[i+1] = cnt;
    a[i+2] = cnt;
    a[i+3] = cnt;
    a[i+4] = cnt;
    cnt+=1.0/3.0;
    }
    a[100] = 4.0;
    double gpa = 0;
    for(int i = 0;i<n;i++){
    cin>>at1>>at2>>final>>cr;
    ksum+=cr;
    if(at1 + at2<30 || final<20){
    gpa+=a[0];
    }else{
    gpa+=(a[at1+at2+final] * cr);
    }
    }
    cout<<gpa/ksum<<endl;
    return 0;
}



// O
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    map<pair<pair<string,int>,pair<string,int> >, int> m;
    int n;
    cin>>n;
    string n1,n2;
    int s1,s2;
    for(int i = 0;i<n;i++)
    {
        cin>>n1>>s1>>n2>>s2;
        m[make_pair(make_pair(n1,s1),make_pair(n2,s2))] = s1
        + s2;
    }
    map<pair<pair<string,int>,pair<string,int> >, int>::
    iterator it;
    for(it = m.begin();it!=m.end();it++)
    {
        cout<<((*it).first.first.first)<<" and
        "<<((*it).first.second.first)<<"
        "<<(*it).second<<endl;
    }
    return 0;
}