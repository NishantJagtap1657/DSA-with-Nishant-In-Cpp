#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={
        3,3,7,7,10,11,11
       
    };
    int str=0,end=vec.size()-1;
    while(str<=end){
      int mid=str+(end-str)/2;
        if(mid%2==0){
            if(vec[mid]==vec[mid +1]){
                str=mid;
            }
            else if(vec[mid]==vec[mid -1]){
              end=mid;
            }
            else{
              cout<<mid;
               return 0;
            }
        }
     else{
            if(vec[mid]==vec[mid +1]){
                 end=mid-1;
            }
            else if(vec[mid]==vec[mid -1]){
               str=mid+1;
            }
            else{
              cout<<mid;
               return 0;
            }
        }
    }

    
  
 
}     