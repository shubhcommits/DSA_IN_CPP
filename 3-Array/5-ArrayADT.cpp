#include<iostream>
using namespace std;
class Array{
    public:
    int *A;
    int size;
    int length;
};
void display(Array arr){  // this will   print all the alements of the array
    cout<<"elements are :"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
int main(){
    Array arr;
    cout<<"Enter the size of the array :"<<endl;
    cin>>arr.size;
    arr.A=new int[arr.size];  // this is to initialise memory in heap
    arr.length=0;
    int n;
    cout<<"Enter the number of elements in array :"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    display(arr);

}