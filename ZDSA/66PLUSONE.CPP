 
 
 // SOLUTION NO 1
 // THIS SOLUTION GIVES CORRECT OUTPUT BUT NOT OPTIMIED 
 // OR IT TAKES MORE MERORY USAGE
 // THIS CODE IS WRITTEN BY ME THATS ALL

 int sum=0;
        for(auto i:dig){
           sum=sum*10+i;
        }
        sum=sum+1;
        while(sum>=0){
           int kam=sum/10;
          ans.push_back(kam);
        }
        reverse(ans.begin(),ans.end());
        return ans;





//SOLUTION NO 2
// THIS SOLUTION IS MOST OPTIMIED SOLUTION 

        class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        int n = dig.size();
        
        // Start from the last digit and move backward
        for (int i = n - 1; i >= 0; i--) {
            // If the digit is less than 9, just increment it and return
            if (dig[i] < 9) {
                dig[i]++;
                return dig;
            }
            // If the digit is 9, it becomes 0 (due to carry)
            dig[i] = 0;
        }
        
        // If the loop finished, it means all digits were 9 (e.g., 999 -> 000)
        // We need to insert a 1 at the very beginning (e.g., 1000)
        dig.insert(dig.begin(), 1);
        return dig;
    }
};


 