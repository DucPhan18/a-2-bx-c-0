#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap a, b, c"<< endl;
    cout << "ax^2+bx+c=0 " << endl;
    cout << "Nhap a = " ;
    cin >> a;
    cout << "Nhap b = ";
    cin >> b ;
    cout << "Nhap c = ";
    cin >> c ;
    int d = (pow(b,2))-4*a*c ;
    cout << "Denta = "<< d ;
    if (d<0)
    {
        cout << " < 0"<< endl;
        cout << "Phuong trinh vo nghiem";
    }
    else if(d==0)
    {

        cout << endl;
        cout << "x1 = x2 = "  << -b/(2*a);
    }
    else
    {
        cout << endl;
        float x1 = (-b+sqrt(d))/(2*a);
        cout << "x1 = " <<x1 <<endl ;
        float x2 = (-b-sqrt(d))/(2*a);
        cout << "x2 = " <<x2 << endl;
    }

    return 0;
}
