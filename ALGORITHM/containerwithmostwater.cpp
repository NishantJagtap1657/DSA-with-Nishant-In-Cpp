#include<iostream>
#include<vector>
using namespace std;
int main(){
int sum=0, om=0;
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
             if(vec[i] < vec[j]){
                 sum= vec[i]*(j-i);
             }
             else{
                sum=vec[j]*(j-i);
             }
             if(sum>om){
                om=sum;
             }
        }
    }
    cout<<om;
    return 0;
}

