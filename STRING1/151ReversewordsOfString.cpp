#include<iostream>
using namespace std;
string ReverseWords(string name){
    int n=name.length();
    string ans="";
    reverse(name.begin(),name.end());
    for(int i=0;i<n;i++){
        string word="";
        while(i<n&&name[i]!=' '){
            word=word+name[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;

        }
        return ans.substr(1);
    }
}
int main(){
    string name="my name is nishant sachin jagtap";
    cout<<ReverseWords(name);
}