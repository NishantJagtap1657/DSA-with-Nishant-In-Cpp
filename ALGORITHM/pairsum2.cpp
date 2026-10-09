#include<iostream>
#include<vector>
using namespace std;
int pairarray(vector<int>vec,int target){
   int n=vec.size();
   vector<int>ans;
   int i=0, j=n-1;

   while(i<j){
    int pair=vec[i]+vec[j];

    if(pair<target){
        i++;
    }
    else if(pair>target){
        j--;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
   }
   return ans;
}
int main(){

    vector<int>vec={1,2,3,4,5,6,7,8};
    
    int target=9;
    vector<int>ans=pair(vec,target);
    cout<<ans[0]<<" ,"<<ans[1];
    return 0;
}