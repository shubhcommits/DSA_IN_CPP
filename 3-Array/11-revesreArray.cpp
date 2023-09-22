// #include<iostream>
// using namespace std;
// class Array{
//     public:
//     int A[10];
//     int size;
//     int length;
// };
// // display function
// void Display(Array arr){
//     for(int i=0;i<arr.length;i++){
//         cout<<arr.A[i]<<endl;
//     }
// }
// // swap function
// void swap(int *x,int *y){  // for modifying something we always have to use pointer and call by address
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;

// }
// // Reversing the array
// void rev(Array *arr){
//     int *B;
//     B=new int[10];
//     int i,j;
//     for(i=arr->length-1,j=0;i>=0;i--,j++){
//         B[j]=arr->A[i];
//     }
//     for(i=0;i<arr->length;i++){
//         arr->A[i]=B[i];
//     }
//     delete []B;  // deleting this to avoid memory leak
// }
// // this is method 2 for array reverse
// void rev2(Array *arr){
//     for(int i=0,j=arr->length-1;i<j;i++,j--){
//         swap(&arr->A[i],&arr->A[j]);
//     }
// }
// // left shift of array
// void leftShift(Array *arr){
//     for(int i=0;i<arr->length;i++){
//         arr->A[i]=arr->A[i+1];
//     }
// }
// // left rotate
// void leftRotate(Array *arr){
//     if(arr->length<=1){
//         return;
//     }
//     int temp=arr->A[0];
//      for(int i=0;i<arr->length;i++){
//         arr->A[i]=arr->A[i+1];
       
//     }
//     arr->A[arr->length-1]=temp;
// }
// int main(){
//     Array arr = {{2,5,4,6,9},10,5};
//     // rev(&arr);
//     rev2(&arr);
//     // leftShift(&arr);
//     // leftRotate(&arr);
//     Display(arr);
// }
/*------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Reverse{
    private:
    int *A;
    int n;
    public:
    Reverse(int n){
        this->n=n;
        A=new int[n];
    }
    ~Reverse(){
        delete []A;
    }
    void reverse();
    void swap(int *x,int *y);
    void Display();
    void Set(int i,int x);
};
void Reverse::reverse(){
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(&A[i],&A[j]);
    }
}
void Reverse::swap(int *x,int *y){  // to modify something we have to pass the pointer
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Reverse::Display(){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
void Reverse::Set(int i,int x){
    A[i]=x;
}
int main(){
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    Reverse r(n);
    cout<<"Enter the elements"<<endl;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        r.Set(i,x);
    }
    r.reverse();
    r.Display();
}
