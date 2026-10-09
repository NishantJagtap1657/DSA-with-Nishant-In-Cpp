#include<iostream>
using namespace std;
int addition(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main(){
    int num1,num2;
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second number:";
cin>>num2;
cout<<addition(num1,num2);
return 0;
}