#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>de={
        12,3,4,5,5
    };
    for(int val:de){
        cout<<val<<" ";

    }
    cout<<endl;
    
    cout<<de[2];
}