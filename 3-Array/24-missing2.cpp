// finding missing element in sorted natural numbers till n starting from 1
#include<iostream>
using namespace std;
class Missing{
    public:
    int A[10];
    int size;
    int length;
    int l=6;
    int h=10;
    int diff=l-0;
    void missing();
    void MultipleMissing();
};
// this is for single missing element
void Missing::missing(){
    for(int i=0;i<length;i++){
        if(A[i]-i!=diff){
            cout<<"Missing element "<<i+diff;
            break;
        }
    }
}
// This is for multiple missing element
void Missing::MultipleMissing(){
    for(int i=0;i<length;i++){
        if(A[i]!=diff){
            while(diff<A[i]-i){
            cout<<"Missing element "<<i+diff<<endl;
            diff++;
            }
        }
    }
}
int main(){
    Missing arr={{6,9,10},10,3};
   // arr.missing(); // single missing 
    arr.MultipleMissing();  //multiple missing
}