#include<iostream>
using namespace std;
/*struct Card{
    int face;
    int shape;
    int color;
};
int main(){
    struct Card c;
    c.face=1;  // here we assign caode of face 1;
    c.shape=0;
    c.color=0;
    cout<<c.face<<endl<<c.shape<<endl<<c.color;
} */
struct Card{
    int face;
    string shape;
    string color;
};
int main(){
    struct Card c;
    c.face=1;  // here we assign caode of face 1;
    c.shape="rectangle";
    c.color="blue";
    cout<<c.face<<endl<<c.shape<<endl<<c.color;
}

