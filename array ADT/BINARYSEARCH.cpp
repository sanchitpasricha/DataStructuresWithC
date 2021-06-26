#include<iostream>
using namespace std;

struct Array{
    int A[15];
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

int BinarySearch(struct Array arr, int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
 printf("%d\n",BinarySearch(arr1,16));
 Display(arr1);
 return 0;
}