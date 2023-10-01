#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    void swap(int *x,int *y);
    public:
    Array(int size){
        this->size=size;
        length=0;
        A=new int[size];
    }
    ~Array(){  // Destructor
        delete []A;
    }
    void Display();
    void insert(int index,int x);
    void Delete(int index);
    int Sum();
    int Average();
    int BinarySearch(int key);
    int LinearSearch(int key);
    int Get(int index);
    int Set(int index,int value);
    int Max();
    int Min();
    void reverse();
    // HAVE TO WORK ON IT
    void insertSorted(int x);
    bool checkSorted();
    void NegOnOneSide();
    Array* merge(Array arr2);
    Array* Union(Array arr2);
    bool isDuplicate(int key,int k);
    Array* Intersection(Array arr2);
    Array* Difference(Array arr2);
};
// Display
void Array::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}  
// Insert
void Array::insert(int index,int x){
    if(index>=0&&index<=length){
    for(int i=length-1;i>=index;i--){  // here not deleting the index element just shifting and assigning the value to that index
        A[i+1]=A[i];
    }
    A[index]=x;
    length++;
    }
}
//Delete
void Array::Delete(int index){
    if(index>=0&&index<length){
        for(int i=index;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
    }
}
//Sum
int Array::Sum(){
    int total=0;
    for(int i=0;i<length;i++){
        total=total+A[i];
    }
    return total;
}
//Average
int Array::Average(){
    int total=0;
    for(int i=0;i<length;i++){
        total=total+A[i];
    }
    return total/length;
}
//BinarySearch
int Array::BinarySearch(int key){
    int l=0;
    int h=length-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(A[mid]==key){
            return mid;
        }
        else if(key>mid){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
//LinearSearch
int Array::LinearSearch(int key){
    for(int i=0;i<length;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
}
//swap
void Array::swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    }
//Get function / find element at particular index
int Array::Get(int index){
    if(index>=0&&index<length){
        return A[index];
    }
    else{
        return -1;
    }
}
// Set function / This will modify the value of index we given
int Array::Set(int index,int value){
    if(index>=0&&index<length){
        A[index]=value;
        return A[index];
    }
    else{
        return -1;
    }
}
// Max of the function
    int Array::Max(){
        int temp=A[0];
        for(int i=0;i<length;i++){
            if(temp<A[i]){
                temp=A[i];
            }
        }
        return temp;
    }
// Min of the function
    int Array::Min(){
        int temp=A[0];
        for(int i=0;i<length;i++){
            if(temp>A[i]){
                temp=A[i];
            }
        }
        return temp;
    }
void Array::reverse(){
    for(int i=0,j=length-1;i<j;i++,j--){
        swap(&A[i],&A[j]);
    }
}
void Array::insertSorted(int x){
    int i=length-1;
    while(x<A[i]){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    length++;
}
bool Array::checkSorted(){
    for(int i=0;i<length;i++){
        if(A[i]>A[i+1]){
            return false;
        }
    }
    return true;
}
void Array::NegOnOneSide(){
    int i=0;
    int j=length-1;
    while(i<j){
        while(A[i]<0){i++;};
        while(A[j]>=0){j--;};
        if(i<j){
            swap(&A[i],&A[j]);
        }
    }
}
Array* Array::merge(Array arr2){  // This will return an array
    int i,j,k;
    i=j=k=0;
    Array *arr3=new Array(length+arr2.length);
    while(i<length&&j<arr2.length){
        if(A[i]<arr2.A[j])
        arr3->A[k++]=A[i++];
        else
        arr3->A[k++]=arr2.A[j++];
    }
    for(;i<length;i++)
    arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
    arr3->A[k++]=arr2.A[j];
    arr3->length=length+arr2.length;
 return arr3;
}
// check duplicate
    bool Array::isDuplicate(int key,int k){
        for(int i=0;i<k;i++){
            if(A[i]==key){
                return true;
            }
        }
        return false;
    }
// Union
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
// Intersection
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
    return arr3;
}
// Difference of two arrays
Array* Array::Difference(Array arr2) {
    int k = 0;
    Array* arr3 = new Array(length);

    for (int i = 0; i < length; i++) {
        bool found = false;

        for (int j = 0; j < arr2.length; j++) {
            if (A[i] == arr2.A[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            arr3->A[k++] = A[i];
        }
    }
    arr3->length = k;
    return arr3;
}
int main(){
    int ch;
    int x;
    int index;
    int size1;
    int size2;
    printf("Enter size of the array 1 : ");
    cin>>size1;
    printf("Enter size of the array 2 : ");
    cin>>size2;
    Array arr(size1);
    Array arr2(size2);
    Array* arr3 = nullptr;
    do{
    cout<<"Menu"<<endl;
    cout<<"1. Insert in Array 1"<<endl;
    cout<<"2. Delete"<<endl;
    cout<<"3. BinarySearch"<<endl;
    cout<<"4. LinerSerach"<<endl;
    cout<<"5. Get"<<endl;
    cout<<"6. Set"<<endl;
    cout<<"7. Max"<<endl;
    cout<<"8. Min"<<endl;
    cout<<"9. reverse"<<endl;
    cout<<"10. Insert in Array 2"<<endl;
    cout<<"11. Merge"<<endl;
    cout<<"12. Sum"<<endl;
    cout<<"13. Union"<<endl;
    cout<<"14. Intersection"<<endl;
    cout<<"15. Difference"<<endl;
    cout<<"16. Display"<<endl;
    cout<<"Enter your choice :";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"Enter the element and index ";
        cin>>x>>index;
        arr.insert(index,x);
        break;
        case 2:
        cout<<"Enter the index you want to delete";
        cin>>index;
        arr.Delete(index);
        break;
        case 3:
        cout<<"Enter the element you want to search";
        cin>>x;
        cout<<arr.BinarySearch(x);
        break;
        case 4:
        cout<<"Enter the element you want to search ";
        cin>>x;
        cout<<arr.LinearSearch(x);
        break;
        case 5:
        cout<<"Enter the index you want to get ";
        cin>>x;
        cout<<arr.Get(x);
        break;
        case 6:
        cout<<"Enter the index and elemnt to modify";
        cin>>index>>x;
        cout<<arr.Set(index,x);
        break;
        case 7:
        cout<<arr.Max();
        break;
        case 8:
        cout<<arr.Min();
        break;
        case 9:
        arr.reverse();
        break;
        case 10:
        cout << "Enter the element and index: ";
        cin >> x >> index;
        arr2.insert(index, x);
        break;
        case 11:
        arr3 = arr.merge(arr2);  // arr3 declared outside switch
        cout << "Merged Array: ";
        arr3->Display();
        delete arr3;
        break;
        case 12:
        cout<<"Sum is "<<arr.Sum();
        break;        
        case 13:
        arr3=arr.Union(arr2);
        cout<<"Union of both array"<<endl;
        arr3->Display();
        delete arr3;
        break;     
        case 14:
        arr3=arr.Intersection(arr2);
        cout<<"Intersection of both array"<<endl;
        arr3->Display();
        delete arr3;
        break;
        case 15:
        arr3=arr.Difference(arr2);
        cout<<"Difference of both array"<<endl;
        arr3->Display();
        delete arr3;
        break;         
        case 16:
        arr.Display();
        break;           
    }
    }while(ch<16);
    return 0;
}