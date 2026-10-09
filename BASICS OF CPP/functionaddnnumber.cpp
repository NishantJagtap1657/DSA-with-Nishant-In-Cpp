#include<iostream>
using namespace std;
int numseries(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
           sum=sum+i;
    }
    return sum;
}

int main(){
int num;
cout<<"enter the number";
cin>>num;
cout<<numseries(num);
return 0;
}