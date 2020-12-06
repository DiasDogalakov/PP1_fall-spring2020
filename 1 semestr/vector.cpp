#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;   // вводим вектор (v- название)  // также можно написать v={1, 10, 11, 41}
    v.push_back(1);  // push_back-ввести цифру 1 в конец массива
    v.push_back(10);   // цифру 10 в конец массива
    v.push_back(11);
    v.push_back(41);

    for(int i = 0; i < v.size(); ++i){
    {     
        cout << v[i] << endl;   // cout << "количество жлементов в векторе" << v.size() << endl
    }



    return 0;
}