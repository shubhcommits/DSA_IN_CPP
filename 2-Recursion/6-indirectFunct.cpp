#include<iostream>
using namespace std;
void funB(int n);  // this is so that funB is define before it use
void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}
int main(){
    int x=20;
    funA(x);
}