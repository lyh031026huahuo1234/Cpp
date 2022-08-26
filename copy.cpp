#include <iostream>
using namespace std;

class A {
    private:
    int a;
    public:
    int x;
    A(int a){
        this->a = a;
        this->x = a;
        cout<<"make constructor"<<endl;
    }
    A(A &x) {
        this->a = x.a;
        cout<<"copy constructor is done"<<endl;
    }
};
void f(A x){}
A g(){
    A temp(1);
    return temp;
}

int main()
{
    A a1(2);
    a1 = 4;
    A a2(a1);
    cout<<"___________"<<endl;
    f(a2);
    cout<<"___________"<<endl;
    cout<<g().x<<endl;
}
