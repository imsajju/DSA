#include <iostream>
using namespace std;
int main(){
    int a=1 ,b=1 ;
    cout<<a<<b;
    int sum;
    for(int i=2 ;i<=10;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    return 0;
}