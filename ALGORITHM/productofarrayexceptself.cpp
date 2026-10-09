#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
         vector<int> vec={1,2,3,4};
         int sum=1;

            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(i!=j){
                        sum=sum*vec[j];
                    }
                }
                ans.push_back(sum);
                sum=1;
            }
            for(int i=0;i<4;i++){
                cout<<ans[i]<<" ";
            }
}