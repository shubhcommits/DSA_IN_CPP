// Here returning the result
#include<iostream>
using namespace std;
int sumToN(int n){
    if(n<1){
        return 0;
    }
    return n+sumToN(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumToN(n);
}