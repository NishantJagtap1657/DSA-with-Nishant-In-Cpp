class Solution {
public:
    int searchInsert(vector<int>& num, int tar) {
        int str=0;
        int end=num.size()-1;
        while(str<=end){
            // if(tar<num[str]){
            //     return 0;
            // }
            // if(tar>num[end]){
            //     return end+1;
            // }
           int mid=str+(end-str)/2;
            if(tar==num[mid]){
                return mid;
            }
            else if(tar>num[mid]){
                str=mid+1;
            }
            else{

                  end = mid - 1;



                // if((num[mid]-tar)>=num[mid-1]){
                //     return mid;
                // }
                // else{
                //     end=mid-1;
                // }
            }
        }   
       return str;
    }
};