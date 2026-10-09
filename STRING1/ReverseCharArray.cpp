#include<iostream>
#include<string>
using namespace std;
int main(){

   char name[]={
    'r','a','C','e','c','a','r','\0'
     };

 
 int str=0, end=6;
   while(str<end){
    swap(name[str],name[end]);
    str++;
    end--;  
   }

   for(int i=0;i<7;i++){
    cout<<name[i]<<" ";
   }
    return 0;

}