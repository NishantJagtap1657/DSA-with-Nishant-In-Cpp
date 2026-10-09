#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>s;

for(int i=1;i<=10;i++)
    s.push(i);

//operation on the stac
while(!s.empty()){
    cout<<s.front()<<" ";
    s.pop();
}
cout<<endl;
}