#include<iostream>
using namespace std;
int main(){
int great=0;
    int arr[]={1,4,8,2,66,9,3100};

    for (int i=0;i<7;i++){
        if(great<arr[i]){
great=arr[i];
        }
        else{

        }

    }
    cout<<"\n";
   cout<<great;
}