class Solution {
public:
     int BinarySearch(vector<int>& num, int tar,int str,int end){
        if(str<=end){
          int  mid=str+(end-str)/2;
            if(num[mid]==tar){
                return mid;
            }
           else if(num[mid]<=tar){
               return  BinarySearch( num, tar,mid+1,end);
            }
            else{
                 return BinarySearch( num, tar,str,mid-1);
            }

        }
        return -1;
     }
    int search(vector<int>& num, int tar) {
      return  BinarySearch( num, tar,0,num.size()-1);
    }
};