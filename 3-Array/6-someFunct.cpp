// contains insert(),delete(),add(),display()
#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    public:
    Array(int sz){
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array(){
        delete []A;
    }
    void Display();
    void InsertElements(int n);
    void Add(int x);
    void Insert(int index,int x);
    void Delete(int index);
};
void Array::InsertElements(int n){
    if(n<=size){
    for(int i=0;i<n;i++){
        cin>>A[i];
        length=n;
    }
    }
    else{
        cout<<"Not enough space to insert"<<endl;
    }
}
void Array::Display(){
    cout<<"Elements are :"<<endl;   
    for(int i=0;i<length;i++){
        cout<<A[i]<<endl;
    }
}
void Array::Add(int x){
    if(length<size){
        A[length++]=x;
    }
    else{
        cout<<"Array is full"<<endl;
    }
}
void Array::Insert(int index,int x){
    if(index>=0&&index<=length&&length<size){
        for(int i=length;i>index;i--){
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
    else{
        cout<<"Invalid index or array is full" << endl;
    }
}
void Array::Delete(int index){
    if(index>=0&&index<length){
        for(int i=index;i<length-1;i++){
            A[i]=A[i+1];
        }
    length--;
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
    // arr.Add(15);
    arr.Insert(5,16);
    arr.Delete(2);
    arr.Display();
}
