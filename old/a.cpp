#include <iostream>
using namespace std;

class test{
private:
    int a;
    int b;
public:
    // test(): a(1),b(1){
    //     cout<<a<<" "<<b<<endl;
    // }
    test(){
        a = 1;
        b = 5;
        cout<<a<<" "<<b<<endl;
    }
    test(int a,int b){
        this->a = a;
        this->b = b;
    }
    void print(){
        cout<<a<<","<<b<<endl;
    }
    void add();
};

void test :: add(){
    a++;
    b++;
}

int main()
{   
    //test A(2,3);
    test A;
    A.add();
    A.print();

}