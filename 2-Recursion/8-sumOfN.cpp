#include<iostream>
using namespace std;
int sum(int n){  // this code will use more space as it uses stack
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    int x=5;
    cout<<sum(x);
}
/************************************************************************************/
// simplest function for sum without recursion
// int sum(int n){
//     return n*(n+1)/2;
// }