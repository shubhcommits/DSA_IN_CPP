#include<iostream>
using namespace std;
int main(){
    char A[]="finding";
    int H[26]={0};  // initailising array with all zeros(Hastable)
    for(int i=0;A[i]!='\0';i++){
        H[A[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(H[i]>1){
            cout << static_cast<char>(i + 'a') << endl;
            cout<<H[i]<<endl;
        }
    }
    return 0;
}


