#include<iostream>
#include<vector>
using namespace std;


int main(){
vector<int>vec={7,1,5,3,6,4};
int min=0;
for(int i=0; i<6;i++){
    if(vec[i]>vec[i+1]){
   min=vec[i+1];

    } 
}
cout<<min;
return 0;
}