#include<iostream>
using namespace std;
int main(){
    int A[]={2,3,4,5,6,7,8,9,10};
    int n=9;
    int i=0,j=n-1;
    int target=10;
    while(i<j){
        if(A[i]+A[j]==target){
            cout<<A[i]<<" "<<A[j]<<" "<<target<<endl; 
            i++;
            j--;
        }
        else if(A[i]+A[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}