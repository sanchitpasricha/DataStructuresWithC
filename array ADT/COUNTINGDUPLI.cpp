#include<iostream>
using namespace std;

int duplicates_count(int arr[],int n){
    int *hash_t;
    int i;
    int max = arr[n-1];
    hash_t = new int[max];
    
    for(i=0;i<n;i++){
        hash_t[arr[i]]++;
    }
    for(i=0;i<=max;i++){
        if(hash_t[i]>1){
            cout<<i<<" - "<<hash_t[i]<<endl;
        }
    }
}

int main(){
    
    int arr[10] = {2,3,3,4,4,4,6,5,7,7};
    duplicates_count(arr,10);
    
}

//OUTPUT
/*
3 - 2
4 - 3
7 - 2
*/
