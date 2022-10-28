#include <iostream>
using namespace std;

template <class T>
void myswap(T&a, T&b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 6;
    int b = 5;
    myswap(a,b);
    cout<<"a:"<<a<<","<<"b:"<<b<<endl;
    double c = 1.1;
    double d = 2.2;
    myswap(c,d);
    cout<<"c:"<<c<<","<<"d:"<<d<<endl;

}
