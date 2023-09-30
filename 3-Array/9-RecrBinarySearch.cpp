// Binary Search using Recursion
#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    public:
    int length;
    Array(int size){
        this->size=size;
        length=0;
        A=new int[size];
    }
    void InsertElements(int n);
    int RBinarySearch(int l,int h,int key);
};
void Array::InsertElements(int n){
    if(length+n<=size){
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
        length=n;
    }
}
int Array::RBinarySearch(int l,int h,int key){
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(A[mid]==key){
            return mid;
        }
        else if(key>A[mid]){
            return RBinarySearch(mid+1,h,key);
        }
        else{
            return RBinarySearch(l,mid-1,key);
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
    int res=arr.RBinarySearch(0,arr.length-1,key);
    cout<<res;
}

/*--------------------------------------------------*/

/*
#include <iostream>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
};
int RBinarySearch(int a[], int l, int h, int key)
{
    // here we also pass array with l,h,key
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            return RBinarySearch(a, l, mid - 1, key);
        }
        else
        {
            return RBinarySearch(a, mid + 1, h, key);
        }
    }
    return -1;
}
int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    cout << RBinarySearch(arr.A, 0, arr.length - 1, 5);
}
*/

/*---------------------------------------------------*/

// Binary search using recursion
/*
#include <iostream>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
};
int RBinarySearch(Array arr, int l, int h, int key)
{
    // here we also pass array with l,h,key
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (arr.A[mid] == key)
        {
            return mid;
        }
        else if (arr.A[mid] > key)
        {
            return RBinarySearch(arr, l, mid - 1, key);
        }
        else
        {
            return RBinarySearch(arr, mid + 1, h, key);
        }
    }
    return -1;
}
int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    cout << RBinarySearch(arr, 0, arr.length - 1, 5);
}
*/
