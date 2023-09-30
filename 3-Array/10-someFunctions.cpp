// This contain Get(),Set(),Max(),Min(),Sum(),Avg()
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
        length=0;
        A=new int[size];
    }
    ~Array(){
        delete []A;
    }
    void InsertElements(int n);  // here n is no of elements entered
    int Get(int index);
    int Set(int index,int x);
    int Max();
    int Min();
    int Sum();
    int Average();

};
void Array::InsertElements(int n){
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    length=n;
}
int Array::Get(int index){
    if(index>=0&&index<length){
        return A[index];
    }
    else{
        return -1;
    }
}
int Array::Set(int index,int x){
    if(index>=0&&index<length){
        A[index]=x;
        return A[index];
    }
    else{
        return -1;
    }
}
int Array::Max(){
    int temp=A[0];
    for(int i=1;i<length;i++){
        if(temp<A[i]){
            temp=A[i];
        }
    }
    return temp;
}
int Array::Min(){
    int temp=A[0];
    for(int i=1;i<length;i++){
        if(temp>A[i]){
            temp=A[i];
        }
    }
    return temp;
}
int Array::Sum(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+A[i];
    }
    return sum;
}
int Array::Average(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+A[i];
    }
    return sum/length;
}
int main(){
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    Array arr(size);
    int n;
    cout<<"Enter number of elemnts to enter"<<endl;
    cin>>n;
    arr.InsertElements(n);
    int index;
    cout<<"Enter the index which you element you want"<<endl;
    cin>>index;
    cout<<arr.Get(index)<<endl;
    cout<<arr.Set(index,5)<<endl;
    cout<<arr.Max()<<endl;
    cout<<arr.Min()<<endl;
    cout<<arr.Sum();
    return 0;
}

/*---------------------------------------*/
/*
// This contain Get(),Set(),Max(),Min(),Sum(),Avg()
#include<iostream>
using namespace std;
class Array{
    public:
    int A[10];
    int size;
    int length;
};
// Append function
// void Append(Array *arr,int x)  // this is a function used to add element to the array if the space available
// {
//  if(arr->length<arr->size)
//  arr->A[arr->length++]=x;
// }
// Get function
int Get(Array arr,int index){
    if(index>=0 && index<arr.length){
    return arr.A[index];
    }
    else{
        return -1;
    }
}
// Set function
int Set(Array *arr,int value,int index){ // FOR MODIFYING ADDRESS IS NEEDED SO POINTER IS REQUIRED
    if(index>=0 && index<arr->length){
    arr->A[index]=value;
    return arr->A[index];
    }
    else{
        return -1;
    }
}
// Max function
int Max(Array arr){
    int temp=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>temp){
            temp=arr.A[i];
        }
    }
    return temp;
}
// Min function
int Min(Array arr){
    int temp=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<temp){
            temp=arr.A[i];
        }
    }
    return temp;
}
// Sum function
int Sum(Array arr){
    int total=0;
    for(int i=0;i<arr.length;i++){
        total=total+arr.A[i];
    }
    return total;
}
// Average function
// int Sum(Array arr){
//     int total=0;
//     for(int i=0;i<arr.length;i++){
//         total=total+arr.A[i];
//     }
//     return total/arr.length;
// }
float Avg(Array arr){
    return (float)Sum(arr)/arr.length;
}
int main(){
    Array arr={{2,6,4,5,6},10,5};
    cout<<Get(arr,4)<<endl;
    cout<<Set(&arr,8,0)<<endl;  // ADDRESS IS TO PASS FOR MODIFYING
    cout<<Max(arr)<<endl;
    cout<<Min(arr)<<endl; // position 0 is modified above
    cout<<Sum(arr);  // above array is modified by set function
    return 0;
}
*/