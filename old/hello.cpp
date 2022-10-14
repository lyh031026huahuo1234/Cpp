#include <iostream>
#include <string>
using namespace std;
int main()
{   int age;
    string name;
    cin >> age >> name;
    name += "zjh";
    cout << "Hello World! "<<name<<"'s"<<age<<"today" << endl;
    cout << name.length() <<endl;

}
