#ifndef _MANAGER_H_
#define _MANAGER_H_

#include "Employee.h"
class Manager: public Employee{
public:
    Manager(const string& _name, const string& _ssn, const string&_title):
        Employee(_name,_ssn), title(_title) {}
        const string& getTitle() const {return title;}
        void print() const;
protected:
    string title;
};

#endif