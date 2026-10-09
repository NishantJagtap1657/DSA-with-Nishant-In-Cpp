#include<iostream>
#include<vector>
using namespace std;
void pairarray(vector<int>& vec,int sz){
    int sum=0;
for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        sum=0;
     sum=vec[i]+vec[j];
        if(vec[i]+vec[j]==9){
           cout<<vec[i]<<"  "<<vec[j];
           return;
        }
       
        }
        
    }
}

int main(){
vector<int>vec={1,2,3,4,5,6,7,8};
int sz=8;
pairarray(vec,sz);
}
