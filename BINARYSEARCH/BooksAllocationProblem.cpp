#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int>&arr,int n,int m,int maxallowedpages){
    int student=1, pages=0;
  for(int i=0;i<n;i++){
       if(arr[i]>maxallowedpages){
          return false;

        }
        if(pages+arr[i]<=maxallowedpages){
              pages=pages+arr[i];

        }
        else{
            student++;
            pages=arr[i];
        }
    } 
  return student > m ?false:true;
}

int allocatebook(vector<int>&arr, int n, int m){
    if(m>n){
        return -1;
    }
     int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];

    }
    int str=0, end=sum, ans=-1;
    while(str<=end){
        int mid=str+(end-str)/2;
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            str=mid+1;

        }
    }
}

int main(){
    vector<int>arr={2,1,3,4};
    int n=4,m=2;
   cout<<allocatebook(arr,n,m)<<endl;
   return 0;
}