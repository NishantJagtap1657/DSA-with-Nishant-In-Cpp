#include<iostream>
#include<string>
using namespace std;
bool IsAlphabet(char ch){
        if((ch>='0' && ch<='9')||(tolower(ch)>='a'&&tolower(ch)<='z')){
            return true;
        }
    return false;
}
bool IsPalindrome(string name){
    int str=0, end=name.length()-1;
    while(str<end){
        if(!IsAlphabet(name[str])){
            str++; continue;
        }
       else if(!IsAlphabet(name[str])){
            end--; continue;
        }
       else if(tolower(name[str])==tolower(name[end])){
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
    string name="nishantnjnfkjnugr";
    if(!IsPalindrome(name)){
        cout<<"string is not palidrome";
    }
    else{
        cout<<"string is  palidrome";
    }
return 0;
}