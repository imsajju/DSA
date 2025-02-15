#include<iostream>
using namespace std;
int main(){
    int a=6;
    int b=5;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<b;
    return 0;
}