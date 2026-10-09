#include<iostream>
using namespace std;
int sumdigit(int num){
  int   sum=0;
  while(num > 0){
    
  int result = num%10;
    num/10;
     sum=sum+result;
}return sum;
}


int main(){
int num;
cout<<"enter the numb