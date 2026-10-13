class Solution {
public:
    bool containsDuplicate(vector<int>& num) {
        int n=num.size();
        sort(num.begin(),num.end());
        for(int i=0;i<n-1;i++){
            if(num[i]==num[i+1]){
                return true;
            }

        }
        return false;
    }
};