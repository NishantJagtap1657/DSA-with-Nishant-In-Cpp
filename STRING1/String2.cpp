#include<iostream>
#include<string>
using namespace std;
int main(){
    string name="nishant sachin jagtap";

    // for(char val:name){
    //     cout<<val<<" ";
    // }
    for(int i=name.length();i>=0;i--){
        cout<<name[i]<<" ";
    }
    return 0;
}