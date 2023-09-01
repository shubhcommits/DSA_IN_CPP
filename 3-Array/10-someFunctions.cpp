// This contain Get(),Set(),Max(),Min(),Sum(),Avg()
#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
// Get function
int Get(Array arr,int index){
    if(index>=0 && index<arr.length){
    return arr.A[index];
    }
    else{
        return -1;
    }
}
// Set function
int Set(Array *arr,int value,int index){ // FOR MODIFYING ADDRESS IS NEEDED SO POINTER IS REQUIRED
    if(index>=0 && index<arr->length){
    arr->A[index]=value;
    return arr->A[index];
    }
    else{
        return -1;
    }
}
// Max function
int Max(Array arr){
    int temp=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>temp){
            temp=arr.A[i];
        }
    }
    return temp;
}
// Min function
int Min(Array arr){
    int temp=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<temp){
            temp=arr.A[i];
        }
    }
    return temp;
}
// Sum function
int Sum(Array arr){
    int total=0;
    for(int i=0;i<arr.length;i++){
        total=total+arr.A[i];
    }
    return total;
}
// Average function
// int Sum(Array arr){
//     int total=0;
//     for(int i=0;i<arr.length;i++){
//         total=total+arr.A[i];
//     }
//     return total/arr.length;
// }
float Avg(Array arr){
    return (float)Sum(arr)/arr.length;
}
int main(){
    Array arr={{2,6,4,5,6},10,5};
    cout<<Get(arr,4)<<endl;
    cout<<Set(&arr,8,0)<<endl;  // ADDRESS IS TO PASS FOR MODIFYING
    cout<<Max(arr)<<endl;
    cout<<Min(arr)<<endl; // position 0 is modified above
    cout<<Sum(arr);  // above array is modified by set function
    return 0;
}