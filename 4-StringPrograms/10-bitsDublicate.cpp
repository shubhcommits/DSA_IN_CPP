#include<iostream>
using namespace std;
int main(){
    char A[]="finding";
    int H=0,x=0;
    for(int i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);  // shifting left  MASKING
    
    if((x&H)>0){
        cout<<"Dublicate"<<" "<<A[i]<<endl;
    }
    else{
        H=x|H;  //MERGING
    }
    }
    return 0;
}