#include<iostream>
using namespace std;
int fun(int n){
    static int x=0;  // this is static and variable declare in code section
    // static variable act as global variable is it retain its value and create single object 
    //.. which is used by all
    if(n>0){
        x++;
        return fun(n-1)+x;  // he  x will added at returning time
    }
    return 0;
}
int main(){
    int a=5;
    cout<<fun(a);
}