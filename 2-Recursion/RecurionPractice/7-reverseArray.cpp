#include<iostream>
using namespace std;
void reverse(int i,int a[],int n){
    if(i>=n/2) return;
    int temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
    reverse(i+1,a,n);
}
int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    reverse(0,a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}