#include<iostream>
using namespace std;
void fun1(int n){
    if(n>0){
        fun1(n-1);
        cout<<n<<" ";  // this is descending call
    }
}
int main(){
    int x=5;
    fun1(x);
}