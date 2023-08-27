// in c variable size is declared only ay compile time(inside stack) but in c++
//..varibale size can be declared at run time
#include<iostream>
using namespace std;
int main(){
    //int n;
    //cin>>n;
    //int A[n];  // here size of variable is declared at run time created in stack
    // for accessing anything from heap we must have a pointer
    // here assigning variable in heap
    int A[5]{1,5,9,6,4};
    int *p;
    p=new int[5];  // this is to get memory from heap
    A[0]=5;  // accessing from stack
    p[0]=8;  // accessing from heap
    // pointer points on first element but with that we can access all the elements
    p[1]=6;
    p[2]=9;
    p[3]=5;
    p[4]=2;
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    delete []p;  // this is used to delete unused memory from heap to avoid memory leak
    return 0;
}
// stack array can not be resized