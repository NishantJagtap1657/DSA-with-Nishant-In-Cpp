#include<iostream>
using namespace std;
int smallestnum(){
    int smallest=2147483647;
    int arr[]={1,4,8,2,66,0,-3100};

    for (int i=0;i<7;i++){
        if(smallest>arr[i]){
              smallest=arr[i];
        }
        else{

        }

    }return smallest;
}

      int main(){

        cout<<smallestnum();
      }