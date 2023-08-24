#include<iostream>
using namespace std;
int x=0;  // globally declared variable
int fun(int n){
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int a=5;
    cout<<fun(a);
}