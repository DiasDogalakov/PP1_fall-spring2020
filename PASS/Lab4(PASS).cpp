// Lab 4

// 1
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;

int main()
{
    int n, max = -10000000000;

    cin >> n;
    
    int arr[n][n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            if(arr[i][j] > max)
                max = arr[i][j];
        }
    }
    
    cout << max;
    return 0;
}



// 2
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n;
    int max = -1e9-17;
    int second = -1e9-17;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] > max)
            {
                second = max;
                max = arr[i][j];
            }

            else if(arr[i][j] > second && arr[i][j] != max)
            {
                second = arr[i][j];
            }
        }
    }
    if(second == -1e9-17)
    cout << 0;
    else
    cout << second;
    return 0;
}



// 3
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n;
    int m;
    int cnt = 0;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] < 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}



// 4
#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n;
    int num = 0;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        arr[0][i] = arr[i][0] = num++;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            arr[i][j] = arr[0][j]*arr[i][0];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}



// 5
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
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "[*]";
        }
        cout << endl;
    }
    return 0;
}



// 6
#include <iostream> //PASS  
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, row, col, max = -1e9-17;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << ++row << " " << ++col << endl;
    return 0;


}



// 7

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << ".";
        cout << i;
        for (int k = 1; k <= i - 1; k++)
            cout << ".";
        cout << endl;
    }
    return 0;
}



// 8
tion
#include <iostream>
using namespace std;
int main()
{
    int n, m, drop = 10000, cnt = 0, subj;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cnt += arr[i][j];
        if(cnt < drop)
        {
            drop = cnt;
            subj = i;
        }
        cnt = 0;
    }
    cout << ++subj;
    return 0;
}



// 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n, m, y;
cin >> n >> m;
int arr[n][m];
for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        cin >> arr[i][j];
for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
        y = sqrt(arr[i][j]);
        if (y * y == arr[i][j]) arr[i][j] = y;
    }
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
        cout << arr[i][j] << " ";
    cout << endl;
}
return 0;
}



// 10
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0 ; j < m; j++)
            cin >> arr[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < m; j++)
        {
            if((i + j) % 2 == 0) 
                arr[i][j]++;
            else
                arr[i][j]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}



// 11
on
#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    cin >> n >> m;
    int arr[n][m];
    int r[n], c[m];
    for(i = 0; i < n; i++)
    {
        for(j = 0 ; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        r[i] = 0;
        for( j = 0; j < m; j++)
            r[i]+=arr[i][j];
    }
    for( j = 0; j < m; j++)
    {
        c[j] = 0;
        for( i = 0; i < n; i++)
        c[j] += arr[i][j];
    }
    for ( i=0; i<n; i++)
        cout<<"\nThe sum of row number "<<i+1<<" is "<<r[i];
    for ( j=0; j<m; j++)
        cout<<"\nThe sum of column number "<<j+1<<" is "<<c[j];
    return 0;
}



// 12
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m], summa = 0, min, x, y;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements: \n";
    for (int j=0;j<m;j++)
    {
        min=a[0][j];
        x=1;
        y=j+1;
        for (int i=0;i<n;i++)
        {
            if (a[i][j]<min)
            {
                min=a[i][j];
                x=i+1;
                y=j+1;
            }
        }
        summa+=min;
        cout << x << ";" << y << endl;
    }
    cout << "\nTheir sum:\n";
    cout << summa;
    return 0;
}



// 13
on
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int len=n,k=1,p=0,i;
    while(k<=n*n)
    {
        for(i=p;i<len;i++)
        {
            arr[p][i]=k++;
        }
        for(i=p+1;i<len;i++)
        {
            arr[i][len-1]=k++;
        }
        for(i=len-2;i>=p;i--)
        {
            arr[len-1][i]=k++;
        }
        for(i=len-2;i>p;i--)
        {
            arr[i][p]=k++;
        }
        p++,len=len-1;
    }
    if(!n%2)
    {
        arr[(n+1)/2][(n+1)/2]=n*n;
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// 14

#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    int n;
    cin>>n;
    for(i = 2; i<n; i++)
    {
        for(j = 2; j <= (i/j); j++)
            if(!(i%j))
                break;
        if(j > (i/j))
            cout << i << " is prime\n";
    }
    return 0;
}



// 15
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    int imax = 0;
    int jmax = 0;
    for (int i = 0; i <n; ++i)
    {
        if (arr[i][i] >max)
        {
            max = arr[i][i];
            imax = i;
            jmax = i;
        }
    }
    cout << "Maximum element is: " <<max<<" with coordinates: "<<imax+1<<";"<<jmax+1;
    return 0;
}



// 16

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        j=n-1-i; sum+=arr[i][j];
    }
    cout << sum;
    return 0;
}



// 17
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout<<' ';
        }
        for(int k = n; k >= n-(2*i); k--) {
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}