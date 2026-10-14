class Solution {
public:
    int majorityElement(vector<int>& num) {
        int n=num.size();
        sort(num.begin(),num.end());
// THIS QUESTION SOLVED BY ME WITHOUT ANY EXTERNAL HELP
       return num[n/2];
    }
};