
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element you want to search : ";
    cin>>x;
    //search
    bool flag =false;
    for(int i=0 ;i<=n-1;i++){
        if(arr[i]==x) flag =true;
    }
    if(flag==true)
    cout<<"found";
    else cout<<"not found";
}
