#include<iostream>
using namespace std;
int main(){

    char str[15];
    cout<<"enter your informaton::";
    cin.getline(str,15,'m');
    for(char val:str){
        cout<<val<<" ";
    }
    return 0;
}
