#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
 int isPrime(vector<int> v)
{
    
    int cnt = 0;
    vector<int> v2;
    for(int i = 0; i < v.size(); i++)
    {
        int y;
        if(v[i] <= 0)
        {
            y = abs(v[i]);
            v2.push_back(y);
        }
        else if(v[i] >= 0)
        v2.push_back(y);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v2.size(); i++)
    {
        while(v2[i]!=0)
        {
            int c = 0;
            for (int i=1; i<=n; i++)
            {
                if (n%i==0)
                c++;
            }
            if (c==2)
            {
            cnt++;
            }
        }
    }
}




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
    int count = count_if(v.begin(), v.end(), isPrime);
    cout << isPrime;
    return 0;
}