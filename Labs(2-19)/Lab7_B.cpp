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