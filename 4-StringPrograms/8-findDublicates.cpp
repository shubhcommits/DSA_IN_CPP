// this code checking how many same(dublicate) characters present in the array
#include<iostream>
using namespace std;
int main(){
    char A[]="finding";
    int i,j;
    int k=0;
    for(i=0;A[i]!='\0';i++){
        for(j=0;A[j]!='\0';j++){
            if(A[i]==A[j]&&j!=i){  // j!=i to ignore same element
                A[j]='0';  // setting up s zero character so that it will not caause repeating
                k++;
            }
        }
    }
    cout<<k;
    return 0;
}
//Time complexity O(n)