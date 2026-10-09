#include<iostream>
using namespace std;
 
void change(int &b){
    b=50;


}
int main(){
    int a=10;
    change(a);
    cout<<a;

    return 0;

}