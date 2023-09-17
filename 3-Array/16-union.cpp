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
