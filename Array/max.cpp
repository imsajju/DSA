#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n] ;
    for(int i=0;i<=n-1; i++){
        cin>>arr[i];
    }
    int max =arr[0]; // arr[0] element max mai gya h
    for(int i=1 ;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;
}