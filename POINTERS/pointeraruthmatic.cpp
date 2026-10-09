#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr;
    ptr++;
    cout<<endl;

    cout<<ptr;
cout<<endl;

    //addition of the pointer
    int c=10;
    int* ptr2=&c;
    cout<<ptr;
    cout<<endl;
    ptr=ptr+2;
    cout<<ptr;


}