#include<iostream>
using namespace std;
int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
int main(){
    int x=5,y=2;
    cout<<pow(x,y);
}
// faster way of finding power using recursion
// int pow(int m,int n){
//     if(n==0){
//         return 1;
//     }
//     if(n%2==0){
//         return pow(m*m,n/2);
//     }
//     else{
//         return m*pow(m*m,(n-1)/2);
//     }
// }
