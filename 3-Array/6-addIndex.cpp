#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
void Display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
void add(Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
int main(){
    Array arr{{1,5,6,8,4},10,5};  // {{elements},size,length}
    add(&arr,10);
    Display(arr);
    return 0;
}