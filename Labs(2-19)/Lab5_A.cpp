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