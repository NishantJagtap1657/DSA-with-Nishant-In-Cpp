#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int>m;
    
    m["nishant"]=10;
     m["sachin"]=3;
      m["jagtap"]=47;
       m["ramram"]=74;

       for(auto val:m){
        cout<<val.first<<"  "<<val.second<<" ";
        cout<<endl;


       }
       cout<<m["nishant"];
       cout<<endl;
       
       cout<<m.count("nishant");

       return 0;

 }