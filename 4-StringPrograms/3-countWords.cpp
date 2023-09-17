#include<iostream>
using namespace std;
int main(){
    char A[]="How are   you";
    int i;
    int w,v,c,ch;
    ch=v=c=w=0;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>=65&&A[i]<=90||A[i]>=97&&A[i]<=122){
            ch++;
            if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){
                v++;
            }
            else{  // for consonant
                c++;
            }
        }
        else if(A[i-1]==' '){  // check is the previous one is space or not
            continue;
        }
        else if(A[i]==' '){ 
            w++;
        }
    }
    cout<<"No of character are : "<<ch<<endl;
    cout<<"No of words are : "<<w+1<<endl;
    cout<<"No of vovels are : "<<v<<endl;
    cout<<"No of consonants are : "<<c<<endl;
    return 0;
}