#include<iostream>
using namespace std;

int duplicates_count(int arr[],int n,int k){
    
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j] == k){
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<k){
            i++;
        }
        else{
            j--;
        }
    }
}

int main(){
    
    int arr[10] = {1,3,4,5,6,8,9,10,12,14};
    duplicates_count(arr,10,10);
}