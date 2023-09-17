#include<iostream>
using namespace std;
int main(){
    char wel[]="WELCOME";
    int i;
    for(i=0;i<wel[i]!='\0';i++){
        wel[i]=wel[i]+32;  // changed to lower case
    };
    cout<<wel;
    return 0;
}
/*----------------------------------TOGGLE CASES------------------------------------------*/
int main(){
    char wel[]="WeLcOmE";
    int i;
    for(i=0;i<wel[i]!='\0';i++){
        if(wel[i]>=65&&wel[i]<=90){
            wel[i]+=32;  // changing to lower case
        }
        else if(wel[i]>=97&&wel[i]<=122){
            wel[i]-=32;  // changing to upper case
        }
    };
    cout<<wel;
    return 0;
}