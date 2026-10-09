class Solution {
public:

// THIS PROBLEM SOLVED MYSELF WITHOUT ANY HELP 
// THE MAIN CONCEPT TO RUN THE LOOP TWO TIMES FROM 0 TO N-1
// THIS TWO CONDITION OF IF PLAYS THE MOST IMP ROLE THIS SOLUTION 
// SECOND IF CHECKS IF COUNT IS 2 THEN THE LOOP TRUN TWICE 
//AND THATS ALL ABOUT THIS PROBLEM
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            if(i==(n-1)){
                i=-1;
                count++;
            }
            if(count==2){
                return ans;
            }
        }
  return ans;  }
};