#include<iostream>
using namespace std;
int main(){
    char str[]={
        'a','c','d','\0'
    };
    char str1[]="nishant is my friend";
    cout<<str1;
    cout<<endl;

    cout<<str<<" ";
    for(char val:str1){
        cout<<val<<" ";
        
    }
    return 0;

}