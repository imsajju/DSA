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
    v.push_back(8);
    v.push_back(10);
    v.push_back(15);
    v.push_back(16);
    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   
}