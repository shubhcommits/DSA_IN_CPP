// code to merge two array
#include <iostream>
using namespace std;
class Array1
{
public:
    int A[5];
    int size;
    int length;
};
class Array2
{
public:
    int B[5];
    int size;
    int length;
};
void merge(Array1 *arr1, Array2 *arr2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int *C;
    C = new int[arr1->length + arr2->length];
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->B[j])
        {
            C[k++] = arr1->A[i++];
        }
        else
        {
            C[k++] = arr2->B[j++];
        }
    }
        for (; i < arr1->length; i++)
        {
            C[k++] = arr1->A[i];
        }
        for (; j < arr2->length; j++)
        {
            C[k++] = arr2->B[j];
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
    Array2 arr2{{6, 7, 8, 9, 10}, 5, 5};
    merge(&arr1, &arr2);
}

/**************************************************************************************/

// code to merge two array
// #include <iostream>
// using namespace std;
// class Array1
// {
// public:
//     int A[5];
//     int size;
//     int length;
// };
// void merge(Array1 *arr1, Array1 *arr2)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int *C;
//     C = new int[arr1->length + arr2->length];
//     while (i < arr1->length && j < arr2->length)
//     {
//         if (arr1->A[i] < arr2->A[j])
//         {
//             C[k++] = arr1->A[i++];
//         }
//         else
//         {
//             C[k++] = arr2->A[j++];
//         }
//         for (; i < arr1->length; i++)
//         {
//             C[k++] = arr1->A[i];
//         }
//         for (; j < arr2->length; j++)
//         {
//             C[k++] = arr2->A[j];
//         }
//     }
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
//     Array1 arr2{{6, 7, 8, 9, 10}, 5, 5};
//     merge(&arr1, &arr2);
// }