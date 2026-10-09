#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int>&arr,int n, int m,int maxwoodunit){
    int painter=1, woodunit=0;
    for(int i=0;i<n;i++){
        if(woodunit+arr[i]<=maxwoodunit){
            woodunit=woodunit+arr[i];

        }
        else{
            painter++;
            woodunit=arr[i];

        }
    }
    return painter <= m ? true:false;

}

int timeunit(vector<int>&arr,int n, int m){
    if(m>n){
        return -1;
    }
    int sum=0 ;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];

    }
    int str=arr[0],end=sum,ans=-1;
    while(str<=end){
      int  mid=str+(end-str)/2;
        if(isvalid(arr, n, m ,mid)){
            ans=mid;
            end=mid-1;

        }
        else{
            str=mid+1;
        }
    }
}

int main(){
  vector<int>arr={
    40,30,10,20
   };
  int n=4, m=2;
  cout<<timeunit(arr,n ,m)<<endl;
  return 0;
}