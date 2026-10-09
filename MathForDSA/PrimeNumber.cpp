#include<iostream>
using namespace std;
int main(){

    int num=6;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cout<<"this num is not prime number";
            return 0;
        }
    }
    cout<<"this num is the prime number";
    return 0;
}