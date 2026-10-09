#include<iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i=n;i>=1;i--){
for(int c=1;c<num;c++){
        cout<<" ";
       }
        for(int j=i;j>=1;j--){
            cout<<num;
            
        } 
        cout<<"\n"; 
       
        num++;
    }
    return 0; 
}