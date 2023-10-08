#include<iostream>
using namespace std;
int main(){
    char name[]="Welcome";
    char B[7];
    int i;
    for(i=0;name[i]!='\0';i++){}
    i=i-1;
    int j;
    for(j=0;i>=0;i--,j++){
        B[j]=name[i];
    }
    B[j]='\0';
    cout<<B;
}
/*-----------------------------SECOND_METHOD-----------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    char name[]="Welcome";
    int i,j,temp;
    for(j=0;name[j]!='\0';j++){}  // this loop to get length of the string
    j=j-1;  // this will address to last link
    for(i=0;i<j;i++,j--){
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
    }
    cout<<name;
}