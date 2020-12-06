// Lab 6

// A
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int FOO(int a, int b)
{
 int c;
 c = a + b;
 return c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << FOO(a, b);
    return 0;
}



// B
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int d[101010];
void diff(int n, int a[], int b[]) {
    for (int i = 1; i <= n; ++ i) {
        d[i] = abs(a[i] - b[i]);
    }
}

int main () {
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++ i) {
        cin >> b[i];
    }
    diff(n, a, b);
    for (int i = 1; i <= n; ++ i) {
        cout << d[i] << ' ';
    }
    return 0;
}



// C
#include <iostream>
using namespace std;

int get_cnt_equals(int n, int a[], int b[]) {
    int x[101]; // max znachenye a[i]
    int y[101]; // max znachenye b[i]
    int sum = 0;
    for (int i = 1; i <= 100; ++ i) {
        x[i] = 0;
        y[i] = 0;
    }
    for (int i = 1; i <= n; ++ i)
        x[a[i]] ++;
    for (int i = 1; i <= n; ++ i)
        y[b[i]] ++;
    for (int i = 1; i <= 100; ++ i) {
        sum += min (x[i], y[i]);
    }
    return sum;
}
int main () {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int j = 1; j <= n; ++ j) {
        cin >> b[j];
    }
    cout << get_cnt_equals (n, a, b);
    return 0;
}



// D
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

bool findElement(int a[], int n, int x) { 
    for (int i = 0; i < n; ++ i) {
        if (a[i] == x)
            return true;
    }
    return false;
}

int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++ i) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if (findElement(a, n, x)) {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}



// E
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
double FOO(int a, int b)
{
    double c = sqrt(a*a + b*b);
    return c;
 
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout<<setprecision(4)<<FOO(a, b);
 
return 0;
}



// F
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



// G
#include <iostream>

using namespace std;

string remove_consonants(string s) {
    string new_string = "";
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (
            c == 'a' || 
            c == 'e' || 
            c == 'i' || 
            c == 'o' || 
            c == 'u' || 
            c == 'A' || 
            c == 'E' || 
            c == 'I' || 
            c == 'O' || 
            c == 'U') {
                continue;
            }
        new_string += c;
    }

    return new_string;
}

string s;

int main() {

    getline(cin, s);
    cout << remove_consonants(s);

    return 0;
}



// H
#include <iostream>

using namespace std;

long long getRemainder(long long number, long long division) {
	return number % division;
}

bool isValidNumber(long long number) {
	while(number > 0) {
		if (!(getRemainder(number % 10, 2) == 0)) {
			return false;
		}
		number /= 10;
	}
	
	return true;	
}

long long n;

int main() {

	cin>>n;
	bool check = isValidNumber(n);
	if (check) cout<<"Valid";
	else cout<<"Not valid";	
	
	return 0;	
}



// I
#include <iostream>
#include <string>

using namespace std;

string make_change(string s) {
    string new_string = "";
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z') {
            new_string += s[i] - ' ';
            continue;
        }
        new_string += s[i];
    }

    return new_string;
}

string s;

int main() {
    cin >> s;
    cout << make_change(s);

    return 0;
}



// J
#include <iostream>
#include <cmath>

using namespace std;

int maximum(int a, int b, int c, int d) {
    
    return max(a, max(b, max(c, d)));
}

int a, b, c, d;

int main() {

    cin>>a>>b>>c>>d;
    cout<<maximum(a, b, c, d);

    return 0;
}



// K
#include <iostream>
#include <cmath>

using namespace std;

int sum_of_all_numbers(int x) {
    int ans = 0;

    while (x > 0) {
        ans += x % 10;
        x /= 10;
    }

    return ans;
}

int n;

int main() {
    cin>>n;
    cout<<sum_of_all_numbers(n);
    
    return 0;
}



// L
#include <iostream>

using namespace std;

bool isValidString(string s, int n) {
	int counter = 0;
	for (int i = 0; i < s.size(); i++) {
		char c = s[i];
		if (c >= '0' && c <= '9') counter++;
		else counter = 0;
		if (counter == n) return true;
	}

	return false;
}

string s;
int n;

int main() {
	
	cin >> s >> n;
	if (isValidString(s, n)) {
		cout<<"Valid";
	} else {
		cout<<"Not valid";
	}
    return 0;
}



// M
#include <iostream>

using namespace std;

void reverse_print(int a[], int len) {
    for (int i = len - 1; i >= 0; i--) {
        cout<<a[i]<<" ";
    }
}

int n, arr[500500];

int main() {
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    reverse_print(arr, n);

    return 0;
}



// N
#include <iostream>

using namespace std;

int n, m, a[1000][1000];

void transpose(int x, int y) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }

    transpose(n, m);
    return 0;
}



// O
#include <iostream>
using namespace std;


bool check(int x) {
    int y = x % 10;
    int w = 0;
    while (x) {
        w += x % 10;
        x /= 10;
    }
    if (w % y == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int x;
    cin >> x;
    if (check(x)) {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}



// P
#include <iostream>
using namespace std;

int module(int x) { 
    if (x < 0)
        return x * -1;
    return x;
}

int main () {
    int x;
    cin >> x;
    cout << module(x);
    return 0;
}



// #include <iostream>
using namespace std;

double persent_of_boys(int n, int m) {
    double x = m * 100;
    x = x / (n * 1.0);
    return x;
}
int main () {
    int n, m;
    cin >> n >> m;
    cout << persent_of_boys(n, m);
    return 0;
}



// R
#include <iostream>
using namespace std;

char toUpper(char a) {
    if (a >= 'A' && a <= 'Z')
        return a;
    int x = a - 'a';
    return char (x + 'A');
}
int main () {
    char c;
    cin >> c;
    cout << toUpper(c);
    return 0;
}