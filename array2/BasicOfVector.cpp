#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> v; // you dont need to mention size 
    // inserting / do not use []
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    // if you want to update/access
    v[0]=22;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}