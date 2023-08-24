#include<iostream>
using namespace std;
int fun(int n){
    static int x=0;  // this is static and variable declare in code section
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