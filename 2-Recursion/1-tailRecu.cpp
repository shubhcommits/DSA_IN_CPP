// If the function is calling itself it is called recursion
#include<iostream>
using namespace std;
void fun1(int n){
    if(n>0){
        cout<<n<<" ";  // this  is ascending call
        fun1(n-1);
    }
}
int main(){
    int x=5;
    fun1(x);
}
// recursive function first go forward then it return backward