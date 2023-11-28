// Time Complexity  -> O(n^2)
// In Bubble sort we got the intermediate results like in one pass we got the largest element and in two pass we got the two largest element
#include<iostream>
using namespace std;
class BubbleSort{
    private:
    void swap(int *x,int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
    int size;
    public:
    BubbleSort(int size){
        this->size=size;
    }
    void Sort(int A[]);
    void Display(int A[]);
};
void BubbleSort::Sort(int A[]){
    for(int i=0;i<size-1;i++){
        int flag=0;  // using flag to make it adaptive
        for(int j=0;j<size-1-i;j++){
            if(A[j]>A[j+1]){
            swap(&A[j],&A[j+1]);
            flag=1;
            }
        }
        if(flag==0){ // if there is no swap in inner loop means array is sorted so can now break the loop
            break;
        }
    }
}
void BubbleSort::Display(int A[]){
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
  int A[]={6,8,1,7,9,4};
  int size=6;
  BubbleSort b(size);
  b.Sort(A);
  b.Display(A);
}