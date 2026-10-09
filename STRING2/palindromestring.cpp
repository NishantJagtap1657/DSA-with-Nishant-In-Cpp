#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main(){
    string str1="mk";
    int str=0, end=str1.size()-1;
    while(str<=end){
      if(tolower(str1[str])!=tolower(str1[end])){
            if((str1[str] < 58 && str1[str] > 47)||(str1[str] < 123 && str1[str] > 96)){
                
            }
            else{
               str++;
               
            }
            if((str1[end] < 58 && str1[end] > 47)||(str1[end] < 123 && str1[end] > 96)){
               
            }
            else{
               end--;
              
            }
            
        }
        else{
           str++;
           end--;

        }

    }
    cout<<"it is palindrome";
    return 0;

}

// 48 to 57
// 97 to 122 