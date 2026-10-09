#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;


    for(int i=1;i<10;i++){
        s.insert(i);
    }
    s.insert(64);
    s.insert(64);
    
    for(int val:s){
        cout<<val<<" ";

    }
}