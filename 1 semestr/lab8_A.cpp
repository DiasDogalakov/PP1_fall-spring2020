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

/*Вам дано N целых чисел. Сортировка N целых чисел по возрастанию. Храните N целых чисел в векторе.
Первая строка ввода содержит число N - количество целых чисел. Вторая строка содержит последовательность целых чисел.
input 
4 
20 3 7 9
output
3 7 9 30
*/