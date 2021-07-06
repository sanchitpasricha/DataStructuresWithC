#include<iostream>
using namespace std;

int duplicates_count(int arr[],int n,int k){
    
    int *hash_t;
    int i;
    hash_t = new int[20];
    
    for(i=0;i<n;i++){
        if(hash_t[k-arr[i]] != 0){
            cout<<arr[i]<<" + "<<k-arr[i]<<" = "<<k<<endl;
        }
        hash_t[arr[i]]++;
    }
    
}

int main(){
    
    int arr[10] = {6,3,6,10,16,7,5,4,9,14};
    duplicates_count(arr,10,10);
}