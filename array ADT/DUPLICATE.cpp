#include<iostream>
using namespace std;

int duplicates(int arr[],int n){
    int new_duplicate = 0;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1] && arr[i] != new_duplicate){
            cout<<arr[i]<<" ";
            new_duplicate=arr[i];
        }
    }
}

int main(){
    
    int arr[10] = {2,3,3,4,4,4,6,5,7,7};
    duplicates(arr,10);
    
}

//OUTPUT
/*
3 4 7 
*/