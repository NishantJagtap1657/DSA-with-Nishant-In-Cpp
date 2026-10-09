#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>lis={
        1,2,3,4,5,67
    };
    lis.push_back(4);
    lis.push_front(8);
lis.pop_back();

for(int val:lis){
    cout<<val<<" ";
}
}