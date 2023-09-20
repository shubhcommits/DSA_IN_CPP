#include<iostream>
using namespace std;
class Matrix{
    private:
    int *A;  // taking pointer array so that we can assign size after what we want
    int n; // This is the dimention of the matrix
    public:
    // Matrix(int element){  // using parameterise constructor
    //     n=element;
    // }
    Matrix(int n){  // using parameterise constructor
       this->n=n;  // if we take same name as initialisation in constructor then we use this length
       A=new int[n];  // dynamacillay allocating size of the array
    }
     ~Matrix(){
     delete []A;  // this will distroy dynamically allocated memory
     }
    /*------------------------demonstration inside------------------------------*/
    // void Set(Matrix *m,int i,int j,int x){  // passing parameter i,j,element and array pointer to be edited
    //     if(i==j){
    //         m->A[i-1]=x;
    //     }
    // }
    // The upper commented function can be used as below without passing object of the class because this function is inside the clas
    // void Set(int i,int j,int x){  // passing parameter i,j,element and array pointer to be edited
    //     if(i==j){
    //         A[i-1]=x;
    //     }
    // }

    // int Get(int i,int j);{// This will get the element from the index we want
    //     if(i==j){
    //         return m.A[i-1];
    //     }
    //     else{
    //         return 0;
    //     }
    // }

    // void Display(){  // displaying the array in matrix form
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if(i==j)
    //             cout<<A[i]<<" ";
    //             else
    //             cout<<"0 ";
    //         }
    //         cout<<endl;
    //     }
    // }
    /*-------------------------------------------------------*/
    void Set(int i,int j,int k);
    int Get(int i,int j); 
    void Display();
};
int Matrix::Get(int i,int j){  // This will get the element from the index we want
        if(i==j){
            return A[i-1];
        }
        else{
            return 0;
        }
    }
    void Matrix::Set(int i,int j,int x){  // passing parameter i,j,element and array pointer to be edited
        if(i==j){
            A[i-1]=x;
        }
    }
    void Matrix::Display(){  // displaying the array in matrix form
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            if(i==j)
            cout<<A[i-1]<<" ";
            else
            cout<<"0 ";
            }
            cout<<endl;
        }
    }

int main(){
    int n;
    cout<<"Enter Dimention of Matrix ";
    cin>>n;
    Matrix m(n);
    cout<<"Enter all elements ";
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            m.Set(i,j,x);
        }
    }
    m.Display();
}