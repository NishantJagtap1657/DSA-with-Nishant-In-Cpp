#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string nishant="myisnameisnishaisisisisisnt";
    while(nishant.find("is")!=string::npos){
      int ram=  nishant.find("is");
        nishant.erase(ram,2);
        cout<<nishant<<endl;
    }
    // this is very easy level of question in string manipulation
    //if you know the function find and erase then you can easily solve this question
    //find function will return the index of the first occurence of the string which we want to 
    // remove and then we can use erase function to remove that string from the main string
    //erase function will take two parameters first is the index of the string which we want 
    // to remove and second is the length of the string which we want to remove