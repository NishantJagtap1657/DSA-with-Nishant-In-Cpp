#include<iostream>
using namespace std;
void factorial(int n, int sum){
     
     if(n==1){
        cout<<sum<<endl;
        return;
    }
   
    sum=sum*n;
   
    factorial(n-1, sum);
    return;
}
int main(){
    int n=2;
    int sum=1;
    factorial(n,sum);
    return 0;
}