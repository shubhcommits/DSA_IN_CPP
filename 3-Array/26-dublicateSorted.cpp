// finding dublicate in sorted array
#include<iostream>
using namespace std;
int main(){
    int A[]={3,6,8,8,12,15,15,15,20};
    int lastDublicate=0;
    for(int i=0;i<9;i++){
        if(A[i]==A[i+1]&&A[i]!=lastDublicate){
            cout<<A[i]<<endl;
            lastDublicate=A[i];
        }
    }
    return 0;
}