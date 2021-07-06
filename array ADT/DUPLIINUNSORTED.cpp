#include<iostream>
using namespace std;

int duplicates_count(int arr[],int n){
    int i,j,count;
    
    for(i=0;i<n-1;i++){
        count = 1;
        if(arr[i] != -1){
            for(j=i+1;j<n;j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
            }
            if(count > 1){
                cout<<arr[i]<<" - "<<count<<endl;
            }
        }
    }
}

int main(){
    
    int arr[10] = {8,3,6,4,6,5,6,8,2,7};
    duplicates_count(arr,10);
    
}