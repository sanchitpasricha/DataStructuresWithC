#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i=0;
    for(i;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}
void Append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
void Insert(struct Array *arr,int index, int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i<index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
    }
}

int main(){
    
    struct Array arr1 = {{2,3,4,5,6},10,5};
    Append(&arr1,10);
    Insert(&arr1,2,12);
    Display(arr1);
    
}

//OUTPUT
//2 3 12 5 6 10 

