#include<iostream>
#include<vector>
using namespace std;
int main(){
    // here we are deling with the function of the vector
    vector<int>vec={1,2,3,4,5,6,67,654};
    vec.pop_back();
    cout<<"\n";
    vec.push_back(23);cout<<"\n";
    vec.push_back(173);
    cout<<vec.back();cout<<"\n";
    cout<<vec.front();cout<<"\n";
    cout<<vec.at(0);cout<<"\n";
    cout<<vec.size();cout<<"\n";
    cout<<vec.capacity();

}