class Solution {
public:
// THIS IS NA EASY LEVEL OF PROBLEM AND IT IS SOLVED MY ME 
// WITHUT USING ANY EXTERNAL HELP WITH 100% EFFICIENCY
    int missingNumber(vector<int>& num) {
        int total=accumulate(num.begin(),num.end(),0);
        int sum=num.size();
        int add=sum*(sum+1)/2;
        if(sum==1){
            if(num[0]==1)return 0;
             if(num[0]==0)return 1;
        }
        if(add-total>0){
            return add-total;
        }
        else if(add-total==0){
            return 0;
        }
        else{
            return sum+1;
        }

    }
};