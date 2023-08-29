#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
void swap(int *x,int *y){  // this is to swap element(transposition)
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int LinearSearch(Array *arr,int key){  // taking pointer because to modify we need address
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]==key){
            swap(&arr->A[i],&arr->A[i-1]);
            // swap(&arr->A[i],&arr->A[0]);  // move to front
            return i;
        }
    }
    return -1;
}
int main(){
    Array arr={{2,5,6,4,8},10,5};
    cout<<LinearSearch(&arr,4);
}