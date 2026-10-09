#include<iostream>
using namespace std;
int decitobi(int num){
    int ans=0;
    int remain;
    int power=1;
int last;
    while(num>0){
remain=num%2;
num=num/2;
last=remain*power;
power=power*10;
ans = ans +last;
    }return ans;
}
int main(){

for (int i=1;i<10;i++){
cout<<decitobi(i);
cout<<"\n";
}



}