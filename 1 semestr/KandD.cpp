#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main()
{ 
    string Kambar ("Motivation");
    string Dias ("Hard work");
    cout << "Before the midterm, Kambar has " << Kambar;
    cout << " and Dias has " << Dias << endl;

    Dias.swap (Kambar);
    cout << "After the midterm, Dias has " << Dias;
    cout << " and Kambar has " << Kambar << endl;
return 0;
}