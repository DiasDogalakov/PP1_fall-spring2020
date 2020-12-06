#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector>
#include <map>
#include <set>
#include <queue>  
#include <stack> 
using namespace std; 

int main()
{
    int n, k;
    cin >> n >> k;
    cout << (n-k%n)%n;
}