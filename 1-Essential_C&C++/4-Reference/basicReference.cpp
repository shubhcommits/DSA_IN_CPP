#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &r=a;  // reference must be initialised at time of declaration
    cout<<a<<endl;
    cout<<r<<endl;
    r++;
    cout<<a<<endl;
    cout<<r<<endl;
    r=48;
    cout<<a<<endl;
    cout<<r<<endl;
    int b=50;
    r=b;
    cout<<a<<endl;  // print 50
    cout<<r<<endl;  // print 50
    return 0;
}