#include<iostream>
using namespace std;
void printName(int n){
    if(n==0) return;  // Base case
    cout<<"Shubham"<<endl;
    printName(n-1);
}
int main(){
    int n;
    cin>>n;
    printName(n);
}