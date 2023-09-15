#include<iostream>
using namespace std;
class Array{
    public:
    int *A;
    int size;
    int length;
};
// Display
void Display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}  
// Insert
void insert(Array *arr, int index,int x){
    if(index>=0&&index<=arr->length){
    for(int i=arr->length-1;i>=index;i--){  // here not deleting the index element just shifting and assigning the value to that index
        arr->A[i+1]=arr->A[i];
    }
    arr->A[index]=x;
    arr->length++;
    }
}
//Delete
void Delete(Array *arr,int index){
    if(index>=0&&index<arr->length){
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}
//Search
int Search(Array arr,int key){
    int l=0;
    int h=arr.length-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr.A[mid]==key){
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
//Sum
int Sum(Array arr){
    int total=0;
    for(int i=0;i<arr.length;i++){
        total=total+arr.A[i];
    }
    return total;
}
int main(){
    Array arr;
    int ch;
    int x;
    int index;
    printf("Enter size of the array : ");
    cin>>arr.size;
    arr.A=new int[arr.size]; 
    arr.length=0;
    do{
    cout<<"Menu"<<endl;
    cout<<"1. Insert"<<endl;
    cout<<"2. Delete"<<endl;
    cout<<"3. Search"<<endl;
    cout<<"4. Sum"<<endl;
    cout<<"5. Display"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice :";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"Enter the element and index ";
        cin>>x>>index;
        insert(&arr,index,x);
        break;
        case 2:
        cout<<"Enter the index you want to delete";
        cin>>index;
        Delete(&arr,index);
        break;
        case 3:
        cout<<"Enter the element you want to search";
        cin>>x;
        cout<<Search(arr,x);
        break;
        case 4:
        cout<<"Sum is "<<Sum(arr);
        break;
        case 5:
        Display(arr);
        break;
    }
    }while(ch<6);
     delete[] arr.A;
    return 0;
}