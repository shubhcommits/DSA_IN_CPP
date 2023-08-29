// Binary search using recursion
#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
int RBinarySearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            return RBinarySearch(a,l,mid-1,key);
        }
        else{
            return RBinarySearch(a,mid+1,h,key);
        }
    }
    return -1;
}
int main(){
    Array arr={{1,2,3,4,5},10,5};
    cout<<RBinarySearch(arr.A,0,arr.length-1,5);
}