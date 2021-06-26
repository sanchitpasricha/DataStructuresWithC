#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    cout<<"Elements are :: \n";
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main(){
    
    struct Array arr1={{2,23,14,5,6,9,8,12},10,8};
    printf("%d\n",LinearSearch(&arr1,14));
    Display(arr1);
    return 0;

}

//OUTPUT
/*
 2
 Elements are :: 
 14 23 2 5 6 9 8 12 
*/

