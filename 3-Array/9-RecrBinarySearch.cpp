// Binary search using recursion
#include <iostream>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
};
int RBinarySearch(int a[], int l, int h, int key)
{
    // here we also pass array with l,h,key
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            return RBinarySearch(a, l, mid - 1, key);
        }
        else
        {
            return RBinarySearch(a, mid + 1, h, key);
        }
    }
    return -1;
}
int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    cout << RBinarySearch(arr.A, 0, arr.length - 1, 5);
}

/*********************************************************************/

// Binary search using recursion
#include <iostream>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
};
int RBinarySearch(Array arr, int l, int h, int key)
{
    // here we also pass array with l,h,key
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (arr.A[mid] == key)
        {
            return mid;
        }
        else if (arr.A[mid] > key)
        {
            return RBinarySearch(arr, l, mid - 1, key);
        }
        else
        {
            return RBinarySearch(arr, mid + 1, h, key);
        }
    }
    return -1;
}
int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    cout << RBinarySearch(arr, 0, arr.length - 1, 5);
}
