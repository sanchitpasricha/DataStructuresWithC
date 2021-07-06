#include<iostream>
using namespace std;

int multi_missing(int arr[],int n){
    int diff = arr[0]-0;
    int i;
    
    for(i=0;i<n;i++){
        if(arr[i]-i != diff){
            while(diff<arr[i]-i){
                cout<<diff+i<<" ";
                diff++;
            }
        }
    }
}

int multi_missing_hashtable(int arr[],int n){
    int *hash_t;
    int i;
    int size = arr[n-1];
    hash_t = new int[size];
    
    for(i=0;i<n;i++){
        hash_t[arr[i]]++;
    }
    for(i=1;i<=size;i++){
        if(hash_t[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    
    int arr[10] = {1,3,5,6,7,8,10,12,13,14};
    multi_missing(arr,10);
    cout<<"\n";
    multi_missing_hashtable(arr,10);
    
}

//OUTPUT
/*
2 4 9 11 

2 4 9 11 

*/