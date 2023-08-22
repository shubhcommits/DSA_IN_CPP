#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;  // decleration of pointer
    p=&a;  // initialisation of pointer
    cout<<*p<<endl;  // dereferencing of pointer
    cout<<p<<endl;  // it will print some address because pointer have address
    cout<<&a<<endl;  // this is also address
    return 0;
}