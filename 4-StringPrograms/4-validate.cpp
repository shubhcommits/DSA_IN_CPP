#include<iostream>
using namespace std;
int valid(char *name){  // passing string a function without making copy of we need pointer
    int i;
    for(i=0;name[i]!='\0';i++){
        if(!(name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<=122)||(name[i]>=48&&name[i]<=57)){
            return 0;
        }
    }
    return 1;
}
int main(){
    char name[]="Ani?45";
    if(valid(name)){
        cout<<"Valid character";
    }
    else{
        cout<<"Invalid character";
    }
}