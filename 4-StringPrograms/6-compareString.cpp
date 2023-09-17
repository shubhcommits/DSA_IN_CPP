#include<iostream>
using namespace std;
int main(){
    char A[]="Painter";
    char B[]="Painting";
    int i,j;
    for(i=0,j=0;A[i]==B[j];i++,j++){
        
    }
    cout<<i<<endl;
    // to check which word will come in dictionary first
    if(A[i]==B[j]){cout<<"equal";}
    else if(A[i]>B[j]){cout<<"A is greater";}
    else{cout<<"string is smaller";}
    return 0;
}