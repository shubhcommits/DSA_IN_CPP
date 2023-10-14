// finding minimum and maximum in one scan
#include<iostream>
using namespace std;
int main(){
    int A[]={2,6,3,4,8,3,7,9,5};
    int min=A[0];
    int max=A[0];
    int n=9;
    for(int i=0;i<n;i++){
        if(A[i]<min){
            min=A[i];
        }
        else if(A[i]>max){
            max=A[i];
        }
    }   
    cout<<"Minimum "<<min<<endl;
    cout<<"Maximum "<<max<<endl;
}