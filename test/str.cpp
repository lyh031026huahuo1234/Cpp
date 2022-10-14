#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1("ABC");
    string str2 = str1;
    string* pstr1 = &str1;
    string* pstr2 = pstr1;
    cout<<*pstr1<<" "<<*pstr2<<endl;
    *pstr1 = "WK";
    cout<<*pstr1<<" "<<*pstr2<<endl;

}