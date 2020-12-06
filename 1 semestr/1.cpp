#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
 set<int> numbers;
 int s;
 int temp;

 for(int i = 0; i<100000; i++)
 {
     cin >> temp;

     numbers.insert(temp); // insert - добавить
 }
 set<int> :: iterator itr;
 vector<int> :: iterator itrForVector;

 vector<int> :: iterator itrForVector;
 for(itr = numbers.begin(); itr !=numbers.end();++itr){
     cout << *itr;
 }
 return 0;
}
