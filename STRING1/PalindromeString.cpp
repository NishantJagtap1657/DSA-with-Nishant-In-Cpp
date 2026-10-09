#include<iostream>
#include<string>
using namespace std;
int main(){

//this code is about to find the string is palidrome or not
//here we are assuming the upper case and lower case alphabet are different 
// they are not same 
//for lowercasing all alphabet we done another code for it
//using the inbuild function tolower(char)


    char name[]={
    'r','a','c','e','c','a','r','\0'
     };

 
 int str=0, end=6;
   while(str<end){
       swap(name[str],name[end]);
       str++;
       end--; 
     if(name[str]==name[end]){

         } 
     else{
        cout<<"string are not palindrome";
               return 0;
        }

    }
    cout<<"string are palindrome";

   return 0;
}
