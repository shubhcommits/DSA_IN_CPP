#include<iostream>
using namespace std;
int main(){
    int A[5]={4,5,3,5,2};
    int *p;
    // p=&A;  // This is wrong syntax
    p=A;  // this is also correct
    p=&A[0];  // this is corret
    // for(int i=0;i<5;i++){
    //     cout<<A[i]<<endl;
    // }
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;  // in case of array pointer act as name of array
    }
}