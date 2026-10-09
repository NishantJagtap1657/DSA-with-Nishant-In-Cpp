class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int tar) {
        vector<vector<int>>ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            for(int j=i+1;j<n;){
                  int p=j+1;
                  int q=n-1;
                  while(p<q){
                         long long  sum=(long long)arr[i] +arr[j] +arr[p] + arr[q];
                    if(sum>tar){
                        q--;
                    }
                    else if(sum<tar){
                        p++;
                    }
                    else{
                        ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                        p++;
                        q--;
                        while(p<q && arr[p]==arr[p-1]){
                            p++;
                        }
                         while(p<q && arr[q]==arr[q+1]){
                            q--;
                        }
                    } 
                }
                j++;
                while(j<n && arr[j]==arr[j-1]){
                    j++;
            }
        }
        }
     return ans;
    }
};