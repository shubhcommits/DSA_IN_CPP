// // code to merge two array
// #include <iostream>
// using namespace std;
// class Array1
// {
// public:
//     int A[5];
//     int size;
//     int length;
// };
// class Array2
// {
// public:
//     int B[5];
//     int size;
//     int length;
// };
// void merge(Array1 *arr1, Array2 *arr2)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int *C;
//     C = new int[arr1->length + arr2->length];
//     while (i < arr1->length && j < arr2->length)
//     {
//         if (arr1->A[i] < arr2->B[j])
//         {
//             C[k++] = arr1->A[i++];
//         }
//         else
//         {
//             C[k++] = arr2->B[j++];
//         }
//     }
//         for (; i < arr1->length; i++)
//         {
//             C[k++] = arr1->A[i];
//         }
//         for (; j < arr2->length; j++)
//         {
//             C[k++] = arr2->B[j];
//         }
//     // Print the merged array
//     for (int l = 0; l < k; l++)
//     {
//         cout << C[l] << " ";
//     }
//     cout << endl;
//     delete[] C;
// }
// int main()
// {
//     Array1 arr1{{1, 2, 3, 4, 5}, 5, 5};
//     Array2 arr2{{6, 7, 8, 9, 10}, 5, 5};
//     merge(&arr1, &arr2);
// }

/**************************************************************************************/

//code to merge two array
#include <iostream>
using namespace std;
class Array1
{
public:
    int A[5];
    int size;
    int length;
};
void merge(Array1 *arr1, Array1 *arr2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int *C;
    C = new int[arr1->length + arr2->length];
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            C[k++] = arr1->A[i++];
        }
        else
        {
            C[k++] = arr2->A[j++];
        }
    }
        for (; i < arr1->length; i++)
        {
            C[k++] = arr1->A[i];
        }
        for (; j < arr2->length; j++)
        {
            C[k++] = arr2->A[j];
        }
    // Print the merged array
    for (int l = 0; l < k; l++)
    {
        cout << C[l] << " ";
    }
    cout << endl;
    delete[] C;
}
int main()
{
    Array1 arr1{{1, 2, 3, 4, 5}, 5, 5};
    Array1 arr2{{6, 7, 8, 2, 10}, 5, 5};
    merge(&arr1, &arr2);
}
/*----------------------------------------------------------------------------------------*/
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
    // ~Array(){  // using destructur gives free() : double free space
    //     delete []A;
    // }
    void insert(int index,int x){
        if(index>=0&&index<=length){
            for(int i=length-1;i>=index;i--){
                A[i+1]=A[i];
            }
            A[index]=x;
            length++;
        }
    }
    void display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    Array* merge(Array arr2);
};
    Array* Array::merge(Array arr2){
        int i,j,k;
        i=j=k=0;
        Array *arr3=new Array(length+arr2.length);
        while(i<length&&j<arr2.length){
            if(A[i]<arr2.A[j]){
                arr3->A[k++]=A[i++];
            }
            else{
                arr3[k++]=arr2.A[j++];
            }
        }
        while(i<length){
            arr3->A[k++]=A[i++];
        }
        while(j<arr2.length){
            arr3->A[k++]=arr2.A[j++];
        }
        arr3->length = length + arr2.length;
        return arr3;
    }
int main(){
    int size1;
    int index;
    cout<<"Enter the size of the first array : ";
    cin>>size1;
    Array arr1(size1);
    int x;
    cout<<"Enter index and element you want to enter in arr1 : ";
    for(int i=0;i<size1;i++){
        cin>>index;
        cin>>x;
        arr1.insert(index,x);
    }
    int size2;
    cout<<"Enter the size of thr array 2 : ";
    cin>>size2;
    Array arr2(size2);
    cout<<"Enter index and element you want to enter in arr1 : ";
    for(int i=0;i<size2;i++){
        cin>>index;
        cin>>x;
        arr2.insert(index,x);
    }
    // Array* arr3=nullptr;
    Array* arr3;
    arr3=arr1.merge(arr2);
    arr3->display();
    return 0;
}