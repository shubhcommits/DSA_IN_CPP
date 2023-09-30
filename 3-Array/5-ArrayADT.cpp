//This contains entering elements in the array and displaying it
#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    public:
    /*
    Array(int sz){
        size=sz;
        length=0;
    }  */
    // If parameter is taken with same name to whom we are assigning then we use this pointer
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
}
