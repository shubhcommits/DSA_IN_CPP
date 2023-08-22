#include<iostream>
using namespace std;
int main(){
    int *p;
    p=new int[5];
    p[0]=1;p[1]=2;p[2]=4;p[4]=5;p[5]=8;
    for (int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    delete [] p;  // deleting when it is not in use
}