//This contain display(),add(),insert(),delete() function
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
// add function
void add(Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
// insert function
void insert(Array *arr,int index,int x){  // this will insert the elemnet at index we want 
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
// delete function
void Delete(Array *arr,int index){
    if(index>=0 && index<arr->length){
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}
// int Delete(Array *arr,int index){
//     int x=0;
//     if(index>=0 && index<arr->length){
//         x=arr->A[index];
//         for(int i=index;i<arr->length-1;i++){
//             arr->A[i]=arr->A[i+1];
//         }
//         arr->length--;
//         return x;
//     }
//     return 0;
// }
int main(){
    Array arr{{1,5,6,8,4},10,5};  // {{elements},size,length}
    add(&arr,10);
    insert(&arr,2,10);
    Display(arr);
    Delete(&arr,0);
    Display(arr);
    return 0;
}