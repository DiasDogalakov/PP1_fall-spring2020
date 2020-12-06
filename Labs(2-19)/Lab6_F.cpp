#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
bool FOO(string str, int n)
{
	int cnt = 0;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >='0' && str[i] <= '9')
		cnt++;
	}
	if(cnt >= n)
	return true;
	else
	return false;
}
int main()
{
	int n;
	string str;
	cin >> str >> n;
	if(FOO(str, n))
	cout << "YES";
	else
	cout << "NO";
	return 0;
}