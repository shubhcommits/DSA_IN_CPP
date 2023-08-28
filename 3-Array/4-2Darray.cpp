#include<iostream>
using namespace std;
int main(){
    // first method of creating 2D array
    int A[3][4]={{1,5,6,2},{5,8,3,6},{5,5,2,8}};
    // second methos of creating 2D array
    int *B[3];
    int i,j;
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];  
    // third method of creating 2D array
    int **C;
    C=new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
   for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }  
}