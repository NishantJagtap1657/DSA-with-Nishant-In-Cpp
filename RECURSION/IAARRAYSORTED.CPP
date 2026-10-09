#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n <= 1){
        return true;
    }

    if(arr[n-1] < arr[n-2]){
        return false;
    }

    return issorted(arr,n-1);
}

int main(){
 
    int arr[]={0,1,2,4,5};
 cout<< issorted(arr,5)<<endl;
    return 0;
}
