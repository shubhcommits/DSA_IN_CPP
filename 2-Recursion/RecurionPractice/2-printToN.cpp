#include<iostream>
using namespace std;
void printToN(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    printToN(i+1,n);  // i++ is not working in recursion call
}
int main(){
    int n;
    cin>>n;
    printToN(1,n);
}