#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    void swap(int *x,int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
    public:
    Array(int size){
        this->size=size;
        A=new int[size];
        length=0;
    }
    ~Array(){
        delete []A;
    }
    void Set(int i,int x);
    Array* Difference(Array arr2);
    void Display();
    bool isDuplicate(int key,int k);
};
Array* Array::Difference(Array arr2) {
    int k = 0;
    Array* arr3 = new Array(length);

    for (int i = 0; i < length; i++) {
        bool found = false;

        for (int j = 0; j < arr2.length; j++) {
            if (A[i] == arr2.A[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            arr3->A[k++] = A[i];
        }
    }
    arr3->length = k;
    return arr3;
}
    void Array::Set(int i,int x){
        A[i]=x;
        length++;
    }
    void Array::Display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    bool Array::isDuplicate(int key,int k){
        for(int i=0;i<k;i++){
            if(A[i]==key){
                return true;
            }
        }
        return false;
    }
    
/*
// this is for sorted array
Array* Array::Difference(Array arr2){
    int k=0;
    int i=0;
    int j=0;
    Array *arr3=new Array(length);
    while(i<length&&j<arr2.length){
        if(A[i]<arr2.A[j]){
            arr3->A[k++]=A[i++];
        }
        else if(A[i]>arr2.A[j]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    while(i<length){
        arr3->A[k++]=A[i++];
    }
    arr3->length=k;
    return arr3;
}
*/
int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    Array arr(size);
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    cout<<"Enter elements of the array"<<endl;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.Set(i,x);
    }
    int size2;
    cout<<"Enter the size of the second array"<<endl;
    cin>>size2;
    Array arr2(size2);
    cout<<"Enter the length of the second array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the second array"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        arr2.Set(i,x);
    }
    Array* arr3; // this is the pointer array 
    arr3=arr.Difference(arr2);
    arr3->Display();
}