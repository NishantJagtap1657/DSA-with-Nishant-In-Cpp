#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>&arr, int start,int end,int num){
if(start<=end){
int mid=start+(end-start)/2;
if(arr[mid]<num){
    return binarysearch(arr,mid+1,end,num);
}
else if(arr[mid]>num){
    return binarysearch(arr,start,mid-1,num);
}
else {
    return mid;
}}
else{
    return -1;
}
}
 
int main(){
    vector<int>arr={
        1,2,3,4,5,6,7,8,9
    };
    int start=0 , end=8, num=70;
  cout<<binarysearch(arr,start,end,num);
   return 0;

}