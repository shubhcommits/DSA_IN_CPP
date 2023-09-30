#include<iostream>
using namespace std;
int main(){
    int *p;
    p=new int[5];
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    int *q;
    q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    cout<<"ARRAY WITH NEW SIZE : "<<endl;
    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}