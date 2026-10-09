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
void china(){
    cout<<"CHINA"<<endl;
    return;
}
void pakistan(){
    cout<<"PAKISTAN"<<endl;
    china();
    cout<<"PAKISTAN"<<endl;
    return;
}
void india(){
    cout<<"INDIA"<<endl;
    pakistan();
    cout<<"INDIA"<<endl;
    return;
}
void country(){
    india();
    cout<<"COUNTRY"<<endl;
    return;
}
int main(){
country();
return 0;
}