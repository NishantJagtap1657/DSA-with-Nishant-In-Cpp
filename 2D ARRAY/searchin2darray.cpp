#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,2,3},{3,4,5},{5,6,7}};
    int m=arr.size(); 
    int n=arr[0].size();
    int strrow=0;
    int endrow=m-1;
    int target=50;
   while(strrow<=endrow){
     int midrow=strrow+(endrow-strrow)/2;
       if(arr[midrow][0]<=target && target<=arr[midrow][n-1]){
            int str=0;
            int end=n-1;
           while(str<=end){
              int mid=str+(end-str)/2;
              if(arr[midrow][mid]==target){
                  cout<<midrow<<"  "<<mid<<endl;
                return 0;
                }
              else if(arr[midrow][mid]>target){
                  end=mid-1;
                }
              else{  
                   str=mid+1;
                }
           } 
       }
       else if(arr[midrow][0]>target ){
            endrow=midrow-1;
        }
       else{
          strrow=midrow+1;
        }
   }
   cout<<"ans is not found"<<endl;
   cout<<"-1 -1 ";
  return 0;
}
