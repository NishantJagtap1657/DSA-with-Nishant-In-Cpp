#include<iostream>
#include<string>
#include<vector>
using namespace std;
int compress(vector<char>&vec){
    int n=vec.size();
    int idx=0;

    for (int i=0;i<n;i++){
        char ch=vec[i];
        int count=0;

        while(i<n && vec[i]==ch){
            count++;
            i++;
        }
        if(count==1){
            vec[idx++]=ch;
            string str=to_string(count);
            for(char dig:str){
                vec[idx++]=dig;
            }
        }
        i--;
    }
    vec.resize(idx);
    return idx;
}
int main(){
    vector<char>vec={'a','b','b','b','c','c','c','a'};
    cout<<compress(vec);
    return 0;
}