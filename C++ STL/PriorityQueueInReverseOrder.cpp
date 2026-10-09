#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<int, vector<int>, greater<int>>l;


for(int i=1;i<=10;i++)
    l.push(i);

//operation on the stac
while(!l.empty()){
    cout<<l.top()<<" ";
    l.pop();
}
cout<<endl;

 }