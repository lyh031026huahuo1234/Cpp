#include "manager.h"

void Manager :: print() const{
    Employee::print();
    cout << title <<endl;
}