#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={2,3,9,10,12,14,15};
    int n=arr.size();
    int target=19;
    int m=0;
    int sum=0;
    while(m<n){
        if(sum==target){
            cout<<m;
            return 0;
        }
        else if(sum>target){
            sum=sum-arr[m];
            m++;
        }
        else if(sum<target){
            sum=sum+arr[m];
            m++;

        }
        else if
    }
}