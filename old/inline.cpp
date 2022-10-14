#include <iostream>
using namespace std;
inline double square(double x) {return x*x;}

int main()
{   double c;
    cin>>c;
    cout<<square(c++)<<endl;

}