#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
int BinarySearch(Array arr,int key){
    int l=0;
    int h=arr.length-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr.A[mid]==key){
            return mid;
        }
        else if(key>arr.A[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
int main(){
        Array arr={{1,2,3,4,5},10,5};
        cout<<BinarySearch(arr,2);
}