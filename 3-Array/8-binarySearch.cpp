#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    public:
    Array(int size){
        this->size=size;
        length=0;
        A=new int[size];
    }
    void InsertElements(int n);
    int BinarySearch(int key);
};
void Array::InsertElements(int n){
    if(length+n<=size){
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
        length=n;
    }
}
int Array::BinarySearch(int key){
    int mid;
    int l=0;
    int h=length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(A[mid]==key){
            return mid;
        }
        else if(key>A[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    Array arr(size);
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    arr.InsertElements(n);
    int key;
    cout<<"Enter the element you want to find ";
    cin>>key;
    int res=arr.BinarySearch(key);
    cout<<res;
}