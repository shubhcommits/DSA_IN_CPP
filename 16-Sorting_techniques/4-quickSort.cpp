// in quick worst case is when list is already sorted -> O(n^2) we can make it best case by making middle element as pioted element
// when partition is in the middle then TIME COMPLEXITY -> O(nlogn)
#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j){
            swap(&A[i],&A[j]);
        }
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
}
void QuickSort(int A[],int l,int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}
int main(){
    int A[]={11,35,21,33,5,3,525,52,INT32_MAX};
    int n=9,i;
    QuickSort(A,0,n-1);
    for(int i=0;i<8;i++){
        cout<<A[i]<<endl;
    }
}