#include <iostream>
using namespace std;
class A{
    public:
    int i;
    A(): i(10){
        cout<<i<<endl;
    }
   virtual void f(){
        cout<<"A()::f()"<<i<<endl;
    }
    void g(){
        f();
    }
};

class B : public A{
    public:
    int i;
    B(): i(20){
        cout<<i<<endl;
    }
  virtual void f(){
        cout<<"B()::f()"<<i<<endl;
    }
};

int main()
{
    B b;
    //b.f();
     A* p = &b;
     p->f();
     p->g();
}