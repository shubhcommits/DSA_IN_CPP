#include<iostream>
using namespace std;
int main(){
    int A[]={6,3,8,10,16,7,5,2,9,14};
    int n=10;
    int target=10;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==target){
                cout<<A[i]<<" "<<A[j]<<" "<<target<<endl;
            }
        }
    }
    return 0;
}