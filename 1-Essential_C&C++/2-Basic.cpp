#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    // int A[n]={1,4,2,5,7};  we can not store data in array by this method
    int A[n];
    for(int i=0;i<n;i++){  // by this method we can store data in array
        cout<<"Enter the element of array "<<i<<" -> ";
        cin>>A[i];
    }
    for(int j=0;j<n;j++){
        cout<<A[j]<<endl;
    }
    return 0;
}