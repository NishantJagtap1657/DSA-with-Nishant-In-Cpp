#include<iostream>
#include<string>
using namespace std;
int main(){
    string name="daabcbaabcbc";
    string subname="abc";

//    int ram = name.find("abc");
//    name.erase(ram+1,3);

    while(name.length()>0 && (subname.length() < name.length())){
        int ram = name.find("abc");
        name.erase(ram,3);
 
    }
    cout<<name;
    cout<<endl;

    return 0;
}