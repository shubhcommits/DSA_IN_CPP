#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
// display function
void Display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
// swap function
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
void rev(Array *arr){
    int *B;
    B=new int[10];
    int i,j;
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
    delete []B;
}
void rev2(Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}
int main(){
    Array arr = {{2,5,4,6,9},10,5};
    // rev(&arr);
    rev2(&arr);
    Display(arr);
}