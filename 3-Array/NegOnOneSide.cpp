#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
// swap function
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
// display function
void Display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
void sort(Array *arr){
    int i=0;
    int j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){i++;};
        while(arr->A[j]>=0){j--;};
        if(i<j){
            swap(arr->A[i],arr->A[j]);
        }
    }
}
int main(){
    class Array arr={{-2,5,-6,4,-8,5,3,-4,5,-4},10,10};
    sort(&arr);
    Display(arr);
}