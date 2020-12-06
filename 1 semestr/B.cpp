#include <iostream>
#include <vector>

using namespace std;

void func(int x1, int y1, int x2, int y2, int z1, int  z2,int x3,int y3)
{

    if(z1<=x2&&z2<=y1&&z1>=x1&&z2>=y2)
    cout << "yes";
    else
    {
        cout << "no";
    }
}

int main()
{
    int x1, y1, x2, y2, z1,z2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> z1 >> z2;
    func(x1,y1,x2,y2,z1,z2,x3,y3);
}