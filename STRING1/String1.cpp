#include<iostream>
#include<string>
using namespace std;
int main(){
     string one="nishant sachin jagtap";
     // we can update string value as follows
     one="nishant jagtap";

     string two="  from govenment college of engineering kolhapur";
     

     //now we are doing operation on the string 

     //concatination of the string
     // addition of the two string
     string fullinfo=one +two;
     cout<<fullinfo;
    cout<<endl;


     // to check the two string is equal to or not
     cout<<(one==two);

     //calculating the lenght of the string
     cout<<two.length();
      cout<<endl;

    


     // giving input  a whole string 
     string entername;
     cout<<"enter the name::";
     cin>>entername;
     cout<<entername;


     //giving input using getline
     string om;
     cout<<"enter your name om::";
     getline(cin,om);
     cout<<om;

    return 0;




}