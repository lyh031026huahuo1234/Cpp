#ifndef __EMPLOYEE_H_
#define __EMPLOYEE_H_

#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    Employee(const string& _name,const string& _ssn):
        name(_name), ssn(_ssn) {}
    const string& getname() const {return name;}
    const string& getSSN() const {return ssn;}
    void print() const;
    void print(const string& msg) const{
        cout<<msg<<endl;
        print();
    }
protected:
    string name;
    string ssn;
} ;

#endif