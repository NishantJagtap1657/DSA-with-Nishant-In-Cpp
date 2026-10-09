class Solution {
public:

// this solution written by me and it passess only test cases on the leetcode but not subbmiteed 
//to see actual solution visit on the file SUBAARAY1.CPP
    int subarraySum(vector<int>& num, int k) {
        int n=num.size()-1;
        int count=0;
        sort(num.begin(),num.end());
        for(int i=n;i>=0;i--){
            int sum=0;
            for(int j=i;j>=0;j--){
                sum+=num[j];
                if(sum==k){
                    count++;
                }
                if(sum>k){
                    sum-=num[j];
                }
            }
            
        }
        return count;
    }
};