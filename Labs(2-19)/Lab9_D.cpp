#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  
   
  vector<int> v[1001];
  
  int n, x;
  cin >> n;
  
  for(int i = 0; i < n; ++i){
    cin >> x;
    v[x].push_back(x);
  }
  
  int cnt = 0;
  
  for(int i = 1; i <= 1000; ++i){
    if(v[i].size() >= 2){
      cnt = cnt + 1;
    }
  }
  
  cout << cnt;
  
 
  
  return 0;
}