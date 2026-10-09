#include<iostream>
using namespace std;
void printnum(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printnum(n-1);
    
}
 int main(){
    int n=5;
    printnum(n);
    return 0;
 }