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

    Array *arr3 = Union(&arr1, &arr2);

    cout << "Union of arr1 and arr2: ";
    for (int i = 0; i < arr3->length; i++) {
        cout << arr3->A[i] << " ";
    }
    cout << endl;

    delete arr3;

    return 0;
}
