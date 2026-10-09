#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={
        0,1,1,2,2,2,0,1,0,2,0,0,0,0,1,1,2,2,2
    };
    int n=19,zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
           zero++;
        }
        else if(arr[i]==1){
                 one++;
        }
        else{
               two++;
        }
    }
    
}