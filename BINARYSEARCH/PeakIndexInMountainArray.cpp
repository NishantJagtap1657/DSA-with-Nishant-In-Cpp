#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10,8,7,6,5,4,3,2,1,0};

    int str=0,end=arr.size()-1;


    while(str<=end){
         int mid=str+(end-str)/2;
        if(arr[mid]<arr[mid+1]&&arr[mid]>arr[mid-1]){
            str=mid+1;
        }
       else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]){
                  end=mid-1;
        }
        else{
            cout<<"the peak index in mountain array is at index at ::::"<<mid;
            return 0;
        }
    }
    return 0;
}