// #include<iostream>
// using namespace std;
// int main(){
//     char A[]="finding";
//     int H[26]={0};  // initailising array with all zeros(Hastable)
//     for(int i=0;A[i]!='\0';i++){
//         H[A[i]-'a']++;
//     }
//     for(int i=0;i<26;i++){
//         if(H[i]>1){
//             cout << static_cast<char>(i + 'a') << endl;  // this will convert ascii code in character format
//             cout<<H[i]<<endl;
//         }
//     }
//     return 0;
// }
// //Time complexity O(n)
// /*--------------------------------------When Letters are  upper case-----------------------------------*/
// #include<iostream>
// using namespace std;
// int main(){
//     char A[]="FINDING";
//     int H[26]={0}; // array containing zero
//     for(int i=0;A[i]!='\0';i++){
//         H[A[i]-'A']++;
//     }
//     for(int i=0;i<26;i++){
//         if(H[i]>1){
//             cout<<static_cast<char>(i+'a')<<endl;
//             cout<<H[i]<<endl;  // This will give how many times they are repeating
//         }
//     }
// }
//Time complexity O(n)
/*--------------------letters are in lower and upper both-----------------------*/
#include<iostream>
using namespace std;
int main(){
    char A[]="FiNdInG";  //  Treating upper and lower case same
        int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>=65&&A[i]<=90){
            A[i]+=32;  // changing to lower case
        }
    }
    int H[26]={0}; // array containing zero
    for(int i=0;A[i]!='\0';i++){
        H[A[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(H[i]>1){
            cout<<static_cast<char>(i+'a')<<endl;
            cout<<H[i]<<endl;  // This will give how many times they are repeating
        }
    }
}