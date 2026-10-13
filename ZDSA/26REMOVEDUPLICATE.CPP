class Solution {
public:
    int removeDuplicates(vector<int>& arr){
        vector<int>ans;
        int n=arr.size();
        for (int i=0;i<n;i++){
            if(i==(n-1)){
                ans.push_back(arr[i]);
                continue;
            }
            if(arr[i]!=arr[i+1]){
              ans.push_back(arr[i]);
            }
        }
         for (int i = 0; i < ans.size(); i++) {
            arr[i] = ans[i];
        }
        return ans.size();
    }
};