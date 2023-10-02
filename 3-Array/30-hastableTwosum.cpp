#include<iostream>
using namespace std;
int main(){
    int A[]={6,3,8,10,16,7,5,2,9,14};
    int n=10;
    int H[17]={0};
    int target=10;
    for(int i=0;i<n;i++){
        if(H[target-A[i]]!=0&&target-A[i]>0){
            cout<<A[i]<<" "<<target-A[i]<<" "<<target<<endl;
        }
        H[A[i]]++;
    }
    return 0;
}