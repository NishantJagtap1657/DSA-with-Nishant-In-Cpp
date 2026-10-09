#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
multiset<int>s;
 for(int i=1;i<10;i++){
        s.insert(i);
    }
    s.insert(64);
    s.insert(64);
    
    for(int val:s){
        cout<<val<<" ";

    }

 }