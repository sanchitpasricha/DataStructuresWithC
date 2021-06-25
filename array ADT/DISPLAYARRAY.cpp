#include<iostream>
using namespace std;

class Array{
    private:
    
    int *A;
    int size;
    int length;
    
    public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
    
    void create(){
        cout<<"Enter Number of elements : "<<flush;
        cin>>length;
        cout<<"Enter the array elements : "<<endl;
        for(int i=0;i<length;i++){
            cout<<"Array element : "<<i<<" = "<<flush;
            cin>>A[i];
        }
    }
    void display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
    }
    
    ~Array(){
        delete[] A;
        cout<<"\nArray Destroyed."<<endl;
    }
};

int main(){
    Array arr(10);
    arr.create();
    arr.display();
    
    return 0;
}

/*
Enter Number of elements : 4
Enter the array elements : 
Array element : 0 = 11
Array element : 1 = 22
Array element : 2 = 33
Array element : 3 = 44
11 22 33 44 
Array Destroyed.



