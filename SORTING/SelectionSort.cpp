#include<iostream>
#include<vector>
using namespace std;
 int main(){
   int arr[]={
    4,1,5,2,3
   };
   int n=5;
   for(int i=0;i<n-1;i++){
     int smallestindex=i;
     for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
            smallestindex=j;
             }

        }
      swap(arr[i],arr[smallestindex]);
    }

   for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}