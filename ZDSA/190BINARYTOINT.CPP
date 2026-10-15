class Solution {
public:
    int reverseBits(int n) {
    vector<int>ans;
   for(int i=0;i<32;i++){
        ans.push_back(n%2);
        n=n/2;
    }
    int result=0;
    int s=ans.size();
    int ram=31;
    for(int i=0;i<s;i++){
       result=result+( ans[i]*pow(2,ram));
       ram--;
    }
    return result;
    }
};