#include<iostream>
#include<cstring>
using namespace std;
struct Student{
    int rollNo;
    char name[10];
    char dept[10];
    char address[40];
};
int main(){
    struct Student s;
    s.rollNo=10;
    // this is used to to copy the content into the character array
    strcpy(s.name, "shubham");
    strcpy(s.dept,"Information Technology");
    strcpy(s.address,"Delhi");
    cout<<s.name;
    return 0;
}