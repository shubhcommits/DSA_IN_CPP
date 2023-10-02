// Finding dublicate using hasTable
// this is for both sorted and unsorted array
#include<iostream>
using namespace std;
int main(){
    int A[]={3,6,8,8,12,15,15,15,20};
    int n=9;
    int H[21]={0};
    for(int i=0;i<n;i++){
        H[A[i]]++;
    }
    for(int i=0;i<=20;i++){
        if(H[i]>1){
            cout<<i<<" is dublicate repeating "<<H[i]<<" number of times"<<endl;
        }
    }
    return 0;
}