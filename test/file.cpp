#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    //ofstream File1("test.txt");
    //File1<<"Hello world"<<endl;
    ifstream File2("test.txt");
    string str1;
    string str2;
    File2>>str1;
    File2>>str2;
    cout<<str1<<endl;
    cout<<str2<<endl;
}