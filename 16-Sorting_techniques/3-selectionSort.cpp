// In one pass we got smallest element In second pass we got two smallest element
// Intermediate result of selection sort is useful
// Selection sort is not adaptive and not stable
#include<iostream>
using namespace std;
class SelectionSort{
    private:
    int size;
    void swap(int *x,int *y){
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    public:
    SelectionSort(int size){
        this->size=size;
    }
    void SelectionS(int A[]);
};
void SelectionSort::SelectionS(int A[]){
    for(int i=0;i<size-1;i++){
        int j=i;
        int k=i;
        while(j<size-1){
            if(A[j]<A[k]){
                k=j;
            }
            j++;
        }
        swap(&A[i],&A[k]);
    }
}
int main(){
    int A[]={2,2,9,3,7,3};
    int size=6;
    SelectionSort ss(size);
    ss.SelectionS(A);
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}