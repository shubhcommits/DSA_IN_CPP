//This contains entering elements in the array and displaying it
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
        length=0;
        A=new int[size];
    }
    ~Array(){
        delete []A;
    }
    void Display();
    void InsertElements(int n);
    int LinearSearch(int key);
    // void swap(int *x,int *y);
};
void Array::InsertElements(int n){
    if(length+n<=size){
    for(int i=0;i<n;i++){
        cin>>A[i];
        length=n;
    }
    }
}
void Array::Display(){
    cout<<"Elements are :"<<endl;
    for(int i=0;i<length;i++){
        cout<<A[i]<<endl;
    }
}
int Array::LinearSearch(int key){
    for(int i=0;i<length;i++){
        if(A[i]==key){
            // swap so that search element move one step front so that next time this found in less time move to front
            swap(&A[i],&A[i-1]);
            return i;
        }
    }
    return -1;
}
int main(){
    int sz;
    cout<<"Enter the size of the array "<<endl;
    cin>>sz;
    Array arr(sz);
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    arr.InsertElements(n);
    arr.Display();
    int key;
    cout<<"Enter the element you want to find in the array"<<endl;
    cin>>key;
    int index=arr.LinearSearch(key);
    if(index>=0){
        cout<<key<<" is find at index "<<index;
    }
    else{
        cout<<key<<" is not found in array";
    }
}