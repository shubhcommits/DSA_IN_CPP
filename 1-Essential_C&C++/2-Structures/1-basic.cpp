#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    struct Rectangle s;
    s.length=5;
    s.breadth=8;
    cout<<s.length*s.breadth;
}