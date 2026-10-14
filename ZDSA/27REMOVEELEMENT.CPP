class Solution {
public:
    int removeElement(vector<int>& num, int val) {
         int n=num.size();
         int k=0;
         for(int i=0;i<n;i++){
              if(num[i]!=val){
                //here we are replacing the element of the array with repect to the k 
                // this is the mainstep of the array or this problem
               num[k]=num[i];
                k++;
              }
         }
         return k;
    }
};