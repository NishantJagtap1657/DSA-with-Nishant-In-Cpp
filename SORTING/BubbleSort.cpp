#include<iostream>
#include<vector>
using namespace std;

int main(){
   int arr[]={
   15,34,86,14,64,9,67,98
   };
   for(int i=0;i<7;i++){
  
      for(int j=0;j<7;j++){
         if(arr[j]>arr[j+1]){
             int  temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
               
            }
         else{

           }
          

        } 
    
    }

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
   
}