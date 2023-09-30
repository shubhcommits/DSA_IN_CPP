#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    public:
    Array(int size){
        this->size=size;
        A=new int[size];
        length=0;
    }
    void Set(int i,int x);
    Array* Intersection(Array arr2);
    void Display();
};
void Array::Set(int i,int x){
    A[i]=x;
    length++;
}
Array* Array::Intersection(Array arr2){
    int k=0;
    Array *arr3=new Array(length<arr2.length?length:arr2.length);
    for(int i=0;i<length;i++){
        for(int j=0;j<arr2.length;j++){
            if(A[i]==arr2.A[j]){
                arr3->A[k++]=A[i];
            }
        }
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}
void Array::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int size1,size2,n,x;
    cout<<"Enter size of array 1"<<endl;
    cin>>size1;
    Array arr1(size1);
    cout<<"Enter length of the array 1"<<endl;
    cin>>n;
    cout<<"Enter elements of the array 1"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        arr1.Set(i,x);
    }
    cout<<"Enter size of the second array"<<endl;
    cin>>size2;
    Array arr2(size2);
    cout<<"Enter length of the array 2"<<endl;
    cin>>n;
    cout<<"Enter elements of the array 2"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        arr2.Set(i,x);
    }
    Array* arr3;
    arr3=arr1.Intersection(arr2);
    arr3->Display();
}
/*-----------------------------------------*/
/*
#include <iostream>
using namespace std;

class Array {
public:
    int A[10];
    int size;
    int length;
};
Array* Intersection(Array *arr1, Array *arr2) {
    int k = 0;
    Array *arr3 = new Array;

    for (int i = 0; i < arr1->length; i++){
        for(int j=0;j<arr2->length;j++){
            if(arr1->A[i]==arr2->A[j]){
                arr3->A[k++]=arr1->A[i];
            }
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main() {
    Array arr1{{1, 5, 3, 4,2}, 10, 5};
    Array arr2{{5, 9,2,4,3}, 10, 5};

    Array *arr3 = Intersection(&arr1, &arr2);

    cout << "Union of arr1 and arr2: ";
    for (int i = 0; i < arr3->length; i++) {
        cout << arr3->A[i] << " ";
    }
    cout << endl;

    delete arr3;

    return 0;
}
*/
