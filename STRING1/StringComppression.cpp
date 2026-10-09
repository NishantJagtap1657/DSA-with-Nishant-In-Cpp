
//this question is solved by me 
//the ans is not correct it have need some correction 
// so i am doing another code for the same problem
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string StringCompression(vector<char>&vec){
    string name="nishant";
    int count=1;
    for(int i=0;i<vec.size();i++){  
        if(vec[i]==vec[i+1]){
            count++;
        }
        else{
            if(i>1){
                cout<<vec[i]<<"  "<<count;
                cout<<endl;
                count=1;
            }
            else{
                cout<<vec[i];
                cout<<endl;
                count=1;
            }
           
        }

    }
    return name;
}
int main(){
    vector<char>vec={'a','b','b','c','c','c','a','a','a','d','k','m','o'};
    cout<<StringCompression(vec);
}