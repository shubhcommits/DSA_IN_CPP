#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
bool checkSorted(Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    Array arr={{12,15,19,18,20},10,5};
    cout<<checkSorted(arr);
}