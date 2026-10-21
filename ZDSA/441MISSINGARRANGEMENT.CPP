class Solution {
public:
    int arrangeCoins(int n) {
         int sum=n;
        for(int i=1;i<=(n/2)+2;i++){
           // THIS IS THE SELF WRITTEN CODE AND IT IS SOLVED BY ME WITHOUT USING ANY EXTERNAL HELP WITH SOME EFFICIENCY

            if(sum-i>0){
                sum=sum-i;
            }
            else if(sum-i==0){
                return i;
               
            }
            else{
                return i-1;
               
            }
        }
        return -1;
    }
};