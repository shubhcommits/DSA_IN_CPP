#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[]="madam";
    char B[6];
    strcpy(B, name);   // this will copy name to B string
    int i,j,temp;
    for(j=0;name[j]!='\0';j++){}
    j=j-1;
    for(i=0;i<j;i++,j--){
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
    }
    if(strcmp(B, name) == 0){  // strcmp will compare both string character cases are also different
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not pallindrome";
    }
}