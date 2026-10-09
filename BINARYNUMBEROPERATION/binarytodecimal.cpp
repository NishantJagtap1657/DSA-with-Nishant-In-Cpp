//covertng the number from the binary to the decimal

#include<iostream>
using namespace std;
int bitodeci(int num){
    int ans=0;
    int remain;
    int power=2;
int last;
    while(num>0){
remain=num%10;
num=num/10;
last=remain*power;
power=power*2;
ans = ans +last;
    }return ans;
}
int main(){
int num=1011100;

cout<<bitodeci(num);
cout<<"\n";

}