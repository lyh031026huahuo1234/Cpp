#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string,string> hash;
    hash["NOT"] = "1101";
    hash["ADD"] = "0001";
    string str;
    string ans;
    string temp = "TABLE";
    string pos = "13";
    hash.insert(make_pair(temp,pos));//哈希表中插入内容
    cout<<hash.count("NOT")<<endl;
    cout<<hash.count(pos)<<endl;
    // cout<<hash["TABLE"]<<endl;
    // cout<<hash[temp]<<endl;
//     getline(cin,str);
//     int n;
//     n = str.find("ADD");
//     if(n!=-1) ans.append(hash["ADD"]);
//     cout<<ans<<endl;
 }