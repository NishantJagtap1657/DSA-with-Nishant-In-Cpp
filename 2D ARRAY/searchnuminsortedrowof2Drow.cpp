#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<vector<int>>arr={{1,2,3,4},{6,8,10,12},{7,9,11,13},{15,16,17,18}};
    int strrow=arr.size()-1;
    int endcol=arr[0].size()-1;
    int target=8;
    while(strrow!=0 && endcol!=0){
        if(target<arr[strrow][0]){
          strrow--;
        }
        if(target<arr[0][endcol]){
            endcol--;
        }
    }
 }

 for(int i=0;i<16;i++){
    

 }