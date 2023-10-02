// finding missing element in sorted natural numbers till n starting from 1
#include<iostream>
using namespace std;
class Missing{
    public:
    int A[8];
    int size;
    int length;
    int H[17]={0};
    int l=0;
    int h=17;
    void Hashtable();
};
void Missing::Hashtable(){
    for(int i=0;i<length;i++){  //O(n)
        H[A[i]]++;
    }
    for(int i=l;i<=h;i++){
        if(H[i]==0){
            cout<<i<<" is not present in array"<<endl;
        }
    }
}
int main(){
    Missing arr={{6,9,10,11,13,14,17,15},8,8};
    arr.Hashtable();
}