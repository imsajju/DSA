#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of rows : ";
    cin>>n;
    int m;
    cout<<"enter num of col : ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int i=1 ; i<=m; i++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}