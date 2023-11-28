// Insertion sort does't give intermediate results this is more appropirate for LinkedList and less useful for arrays
// Time Complexity -> O(n^2)
// Insertin sort is by nature adaptive and stable
#include<iostream>
using namespace std;
class InsertionSort{
    private:
    int size;
    public:
    InsertionSort(int size){
        this->size=size;
    }
    void Insert(int A[]);
    void Display(int A[]);
};
void InsertionSort::Insert(int A[]){
    int j,x;
    for(int i=1;i<size;i++){
        j=i-1;
        x=A[i];
        while(j>=0&&A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
void InsertionSort::Display(int A[]){
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[]={2,6,9,11,17,36,52};
    int size=7;
    InsertionSort in(size);
    in.Insert(A);
    in.Display(A);
    return 0;
}