#include<iostream>
using namespace std;
void reversetheelementofarray(int arr[],int sz){
int start=0; int end =sz-1;
while(start<end){
    swap(arr[start],arr[end]);
        start++;
        end--;  
}
}
int main(){
   int sz=6;
    int arr[]={1,2,3,4,5,6};
    reversetheelementofarray(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i];
    }
return 0;
}