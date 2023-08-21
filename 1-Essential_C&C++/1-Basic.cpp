#include<iostream>
using namespace std;
int main(){
    // int A[5];
    // A[0]=5;  
    // A[1]=7;
    // A[2]=12;
    // A[3]=15;
    // A[4]=20;
    // int A[5]={3,3,5,2,1};  // we can also initialise it by this
    int A[10]={3,3,5,2,1}; 
    // for(int i=0;i<5;i++){
    //     cout<<A[i]<<endl;
    // }
    // printing by for each loop
    for(int x:A){  // we can use this if we don't know the size of the array
        cout<<x<<endl;
    }
    cout<<sizeof(A)<<endl; // IT GIVES RESULT 20 AS 
    printf("%d\n",A[0]);  // we can also use  printf in c++
    cout<<A[8];  // it gives zero as A[8] is not defined
    return 0;
}