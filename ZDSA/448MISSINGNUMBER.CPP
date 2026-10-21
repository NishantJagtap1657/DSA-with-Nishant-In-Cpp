class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& num) {
       
        sort(num.begin(), num.end());
        
        vector<int> missing;
        int expected = 1;
        int i = 0;
        
        while (i < num.size()) {
            if (num[i] == expected) {
              
                expected++;
                i++;
            } else if (num[i] < expected) {
               i++;
            } else {
               
                missing.push_back(expected);
                expected++; 
            }
        }
        while (expected <= num.size()) {
            missing.push_back(expected);
            expected++;
        }    
        return missing;
    }
};
