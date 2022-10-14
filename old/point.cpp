#include <iostream>
using namespace std;

class Point{
private:
    float x;
    float y;
public:
   void init(int x,int y){
    this->x = x;
    this->y = y;
   }
    void print(){
        cout << this << endl;
        cout<<x<<","<<y<<endl;
    }
    void move(int dx,int dy);
};

void Point::move(int dx,int dy){
    x += dx;
    y += dy;
}

int main()
{
    Point a,b;
    a.init(1,1);
    b.init(1,1);
    a.move(2,2);
    a.print();
    b.print();
}