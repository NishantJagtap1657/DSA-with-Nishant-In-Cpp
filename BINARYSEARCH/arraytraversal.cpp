#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={
        1,2,3,4,5,6,7
    };
   int num=1;
   int start=0;
    int end=6;
  
while(start<=end){
    int   mid=start+(end-start)/2;
    if(num > arr[mid]){
        start=mid+1;
    }
    else if(num < arr[mid]){
        end=mid-1;
    }
    else if(num==arr[mid]){
        cout<<mid;
        return 0;
    }
    else{
        cout<<-1;
        return 0;
    }
}
}