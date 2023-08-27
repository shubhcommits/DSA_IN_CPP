// #include<iostream>
// using namespace std;
// double e(int x,int n){
//     double s=1;
//     for(;n>0;n--){  // this is implemented using loops
//         s=1+x*s/n;  // here we multiply s with x before x/n because(to make it double) x and n both are integers 
//         //... we will get integers if x/n done first 
//     }
//     return s;
// }
// int main(){
//     cout<<e(4,10);
// }
/*****************************************************************/
// implementing using recursion
#include<iostream>
using namespace std;
double e(int x,int n){
    static double s;  // Static variable used to **accumulate** the result across function calls
    /* the static value retains the value what it has given and modifies if it will modify and then
    retain modified value*/
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;  // this  is derived by taking commom to reduce multiplication
        return e(x,n-1);
    }
}
int main(){
    cout<<e(2,10);  // Calculating e^2 using 10 terms of the Taylor series
}