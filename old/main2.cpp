#include "employee.h"
#include "manager.h"

int main()
{
    Employee p1("John Smith","123456");
    Manager p2("Tom Jordan","454545","Mr.");
    p1.print();
    p2.print();
    p1.print("Welcome:");
    //p2.print("Welcome:");//名字隐藏 父类的重载函数不再存在
}
