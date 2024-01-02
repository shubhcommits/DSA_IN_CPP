#include<iostream>
#include<vector>
using namespace std;
class mergeSort{
    private:
    int size;
    public:
    mergeSort(int size){
        this->size=size;
    }
    void mergeS(int A[],int low,int high);
    void merge(int A[],int low,int mid,int high);
};
void mergeSort::mergeS(int A[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeS(A,low,mid);
    mergeS(A,mid+1,high);
    merge(A,low,mid,high);
}
void mergeSort::merge(int A[],int low,int mid,int high){
    vector<int> v;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if(A[left]<=A[right]){
            v.push_back(A[left]);
            left++;
        }
        else{
            v.push_back(A[right]);
            right++;
        }
    }
    if(left<=mid){
        v.push_back(A[left]);
        left++;
    }
    if(right<=high){
        v.push_back(A[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        A[i]=v[i-low];
    }
}
int main(){
    int A[]={1,5,2,7,3};
    mergeSort m(5);
    m.mergeS(A,0,4);
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}