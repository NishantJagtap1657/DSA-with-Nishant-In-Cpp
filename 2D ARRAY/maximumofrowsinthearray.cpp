#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,56,3},{4,5,6},{7,8,9}};
   int max=0;
    for(int i=0;i<3;i++){
         int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
            }
            if(max<=sum){
                max=sum;
        }
    }
    cout<<max<<endl;
    return 0;

}


// if you are tring to calculating the maximum colum from the aray then simply change 
// sum=sum+arr[j][i]; j to i and i to j in the above code.
