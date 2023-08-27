// array is collection of similiar data elements(grouped under one name) int[5] 
// arrays are vector variables
#include<iostream>
using namespace std;
int main(){
    int A[5];
    int B[5] = {4,4,9,7,5}; 
    int C[5]={4,5};
    int D[5]={0};
    int E[]={1,3,5,2,4,2,3,2};
    for(int i=0;i<5;i++){
        cout<<&A[i]<<endl;
    }
    return 0;
}