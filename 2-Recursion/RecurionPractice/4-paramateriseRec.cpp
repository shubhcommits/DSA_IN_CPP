#include<iostream>
using namespace std;
void sumToN(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumToN(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    sumToN(n,0);
}