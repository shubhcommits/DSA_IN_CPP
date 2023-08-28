#include<iostream>
using namespace std;
int main(){
    int *p,*q;
    p=new int[5];
    p[0]=8;
    p[1]=6;
    p[2]=8;
    p[3]=2;
    p[4]=6;
    q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
}