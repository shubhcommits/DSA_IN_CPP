#include <iostream>
using namespace std;

class Array
{
public:
    int A[10];
    int size;
    int length;
};

bool isDuplicate(Array *arr, int key, int k)
{
    for (int i = 0; i < k; i++)
    {
        if (arr->A[i] == key)
        {
            return true;
        }
    }
    return false;
}

Array *SortedUnion(Array *arr1, Array *arr2)
{
    int k = 0;
    int i = 0;
    int j = 0;
    Array *arr3 = new Array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr1->A[i] > arr2->A[j])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    while (i < arr1->length)
    {
        arr3->A[k++] = arr1->A[i++];
    }
    while (j < arr2->length)
    {
        arr3->A[k++] = arr2->A[j++];
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main()
{
    Array arr1{{1, 5, 8, 15, 16}, 10, 5};
    Array arr2{{16, 17, 18}, 10, 6};

    Array *arr3 = SortedUnion(&arr1, &arr2);

    cout << "Union of arr1 and arr2: " << endl;
    for (int i = 0; i < arr3->length; i++)
    {
        cout << arr3->A[i] << " ";
    }
    cout << endl;

    delete arr3;

    return 0;
}
