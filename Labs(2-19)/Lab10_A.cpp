#include <iostream> //PASS
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string students[n];
    int grades[n];
    for(int i = 0; i < n; i++) {
        cin>>students[i];
        cin>>grades[i];
    }
    sort(students, students + n);
    sort(grades, grades + n);
    for(int i = 0; i < n; i++) {
        cout<<students[i]<<" "<<grades[i]<<endl;
    }
    return 0;
}