#ifndef _TEST_H_
#define _TEST_H_
class test{
private:
    int a;
    int b;
public:
    test();
    test(int a,int b){
        this->a = a;
        this->b = b;
    }
    void print();
    void add();
};

#endif
