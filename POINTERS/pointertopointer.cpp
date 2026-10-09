#include<iostream>
using namespace std;
int main(){
    // we are uderstanding here pointer to pointer approch
    int a=9;
    int *ptr=&a;
    int **ptr2=&ptr;
    cout<<&a;
cout<<endl;
    cout<<ptr;
cout<<endl;
    cout<<&ptr;
cout<<endl;
    cout<<ptr2;
cout<<endl;
    cout<<&ptr2;

    return 0;
    
}