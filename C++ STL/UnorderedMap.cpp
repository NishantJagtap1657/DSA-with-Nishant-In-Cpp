#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int>m;
    
    m["nishant"]=10;
    m["sachin"]=3;
    m["jagtap"]=47;
    m["ramram"]=74;

    for(auto val:m){
        cout<<val.first<<"  "<<val.second<<" ";
        cout<<endl;
    }
    return 0;
 }