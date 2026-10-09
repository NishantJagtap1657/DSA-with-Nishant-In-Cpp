#include<iostream>
using namespace std;
int main(){
    //while calculating diagonal sum there is condition for the 
    //array should be of equal row and the equal coloumns
    int arr[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
    int sum=0;

    for(int i=0;i<4;i++){ 
        for(int j=0;j<4;j++){
            if(i==j||i+j==3){
              sum=sum+arr[i][j];
            } 
        }
    }
    cout<<sum<<endl;
    return 0;
}
