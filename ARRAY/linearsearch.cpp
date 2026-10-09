#include<iostream>
using namespace std;
int search(int arr[],int num){

    for(int i=0;i<7;i++){
        if(arr[i]==num){
            return i;
            
        }
    }
    
return -1;
}
int main(){
    int num=7;
    
    int arr[]={1,2,3,4,5,6,7};
    
    
cout<<search(arr, num);
return 0;
}