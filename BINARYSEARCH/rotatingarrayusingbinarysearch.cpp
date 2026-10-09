#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={
        3,4,5,6,7,0,1,2
    };

   int l=0 , r=arr.size()-1, tar=5;

   while(l<=r){
      if(tar<arr[r]){
        r=r-1;
       }
     else if(tar>arr[l]){
        l=l+1;
      }
      else if(tar==arr[r]){
        cout<<r;
        return 0;
        }
      else{
        cout<<l;
        return 0;
        }}
    
   cout<<-1;
   return 0;
}