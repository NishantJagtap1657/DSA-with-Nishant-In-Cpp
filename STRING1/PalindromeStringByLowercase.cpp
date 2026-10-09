#include<iostream>
#include<string>
using namespace std;
bool IsPalindrome(char arr[], int str, int end){
    while(str<end){
        if(arr[str]==arr[end]){
            str++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
    
}
int main(){
    char arr[]={
        'r','a','C','e','c','a','r','\0'
    };
    int str=0, end=6;
   if(!IsPalindrome(arr,str,end)){
        cout<<"string is not palidrome";
    }
   else{
        cout<<"string is  palidrome";

    }
    return 0;
}