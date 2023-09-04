// Inserting an element in sorted array so that it will remains sorted
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
// This method is lendhy method

// void insert(Array *arr,int x){
//     int i;
//     for(i=0;i<arr->length;i++){  // this for loop is check of which element given alement is small
//         if(x<arr->A[i]){
//         for(int j=arr->length-1;j>=i;j--){  // shifting element to right to make space
//             arr->A[j+1]=arr->A[j];
//         }
//         arr->A[i]=x;
//         // arr->length=arr->length+1;
//         arr->length++;
//         break;
//     }
//     else if(i>=arr->length){
//         arr->length++;
//         arr->A[arr->length-1]=x;
//         break;
//     }
//     }
// }

// This is the main method
void insert(Array *arr,int x){
    int i=arr->length-1;
    while(x<arr->A[i]){  // here we use while loop as we don't know no of time it will go in loop
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}
int main(){
    Array arr={{4,5,7,8,9},10,5};
    insert(&arr,6);
    Display(arr);
}