#include<iostream>
using namespace std;
void printToN(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printToN(n-1);
}
int main(){
    int n;
    cin>>n;
    printToN(n);
}