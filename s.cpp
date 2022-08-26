#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;
    int n;
    string::iterator p = str.begin();
    while(p!=str.end()){
        if(*p=='A') n++;
        p++;
    }
    cout<<n<<endl;

    // int n;
    // cout<<str.size()<<endl;
    // n =str.find("ADD");
    // //cout<<n<<endl;
    // if(n!=-1) cout<<"yes"<<n<<endl;
    // else cout<<"no"<<endl;
}