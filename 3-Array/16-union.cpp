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
    Array* Union(Array arr2);
    void Display();
    bool isDuplicate(int key,int k);
};
    void Array::Set(int i,int x){
        A[i]=x;
        length++;
    }
    void Array::Display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    bool Array::isDuplicate(int key,int k){
        for(int i=0;i<k;i++){
            if(A[i]==key){
                return true;
            }
        }
        return false;
    }
    Array* Array::Union(Array arr2){
        int k=0;
        Array *arr3 = new Array(length+arr2.length);
        for(int i=0;i<length;i++){
            if(!isDuplicate(A[i],k)){
                arr3->A[k++]=A[i];
            }
        }
        for(int j=0;j<arr2.length;j++){
            if(!isDuplicate(arr2.A[j],k)){
                arr3->A[k++]=arr2.A[j];
            }
        }
        arr3->length=k;
        return arr3;
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
    int size2;
    cout<<"Enter the size of the second array"<<endl;
    cin>>size2;
    Array arr2(size2);
    cout<<"Enter the length of the second array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the second array"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        arr2.Set(i,x);
    }
    Array* arr3; // this is the pointer array 
    arr3=arr.Union(arr2);
    arr3->Display();
}

/*---------------------------------------------------*/
/*
#include <iostream>
using namespace std;

class Array {
public:
    int A[10];
    int size;
    int length;
};

bool isDuplicate(Array *arr, int key, int k) {
    for (int i = 0; i < k; i++) {
        if (arr->A[i] == key) {
            return true;
        }
    }
    return false;
}

Array* Union(Array *arr1, Array *arr2) {
    int k = 0;
    Array *arr3 = new Array;

    for (int i = 0; i < arr1->length; i++) {
        if (!isDuplicate(arr3, arr1->A[i], k)) {
            arr3->A[k++] = arr1->A[i];
        }
    }

    for (int j = 0; j < arr2->length; j++) {
        if (!isDuplicate(arr3, arr2->A[j], k)) {
            arr3->A[k++] = arr2->A[j];
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main() {
    Array arr1{{1, 5, 3, 5, 4}, 10, 5};
    Array arr2{{5, 9, 2}, 10, 5};

    Array *arr3 = Union(&arr1, &arr2);

    cout << "Union of arr1 and arr2: ";
    for (int i = 0; i < arr3->length; i++) {
        cout << arr3->A[i] << " ";
    }
    cout << endl;

    delete arr3;

    return 0;
}
*/
   /*------------------------------------------------------------------------------------------------*/
   // This is initial method done
    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int A[]={1,2,3,4,5};
    //     int B[]={5,6,7,8,9};
    //     int k=0;
    //     int *U;
    //     U=new int[9];
    //     for(int i=0;i<5;i++){
    //         U[k++]=A[i];
    //     }
    //     for(int i=0;i<5;i++){
    //         for(int j=0;j<k;j++){
    //             if(B[i]==U[j]){
    //                 break;
    //             }
    //             else if(j==k-1&&B[i]!=U[j]){
    //                 U[k++]=B[i];
    //             }
    //         }
    //     }
    //     for(int i=0;i<9;i++){
    //         cout<<U[i]<<" ";
    //     }
    //     return 0;
    // }
