#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    void swap(int *x,int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
    public:
    Array(int size){
        this->size=size;
        A=new int[size];
        length=0;
    }
    ~Array(){
        delete []A;
    }
    void Set(int i,int x);
    void negOnOneSide();
    void Display();
};
    void Array::Set(int i,int x){
        A[i]=x;
        length++;
    }
    void Array::Display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
    }
    void Array::negOnOneSide(){
        int i=0;
        int j=length-1;
        while(i<j){
            while(A[i]<0){i++;}
            while(A[j]>=0){j--;}
            if(i<j){
                swap(&A[i],&A[j]);
            }
        }
    }
int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    Array arr(size);
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    cout<<"Enter elements of the array"<<endl;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.Set(i,x);
    }
    arr.negOnOneSide();
    arr.Display();
    return 0;
}

/*------------------------------------------------*/

/*
#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
// swap function
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
// display function
void Display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
void sort(Array *arr){
    int i=0;
    int j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){i++;};
        while(arr->A[j]>=0){j--;};
        if(i<j){
            swap(arr->A[i],arr->A[j]);
        }
    }
}
int main(){
    class Array arr={{-2,5,-6,4,-8,5,3,-4,5,-4},10,10};
    sort(&arr);
    Display(arr);
}
*/