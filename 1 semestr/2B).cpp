#include <iostream>

using namespace std;

int main(){
    int n;
    cin  >> n;
    int arr [n];
    bool s = true;
    for (int i = 0; i < n, i++)
    {
        if(cin  >> arr[i] < arr[i+1])
        s = 1;
        else if (arr [i]> arr[i+1])
    }
}