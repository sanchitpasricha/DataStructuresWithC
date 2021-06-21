#include<iostream>
using namespace std;

int binaryChange(int a, int binary[], int size){
    
    int i = 0;
    while(a>0){
        binary[i]=a%2;
        a=a/2;
        
        i++;
    }
    return i;
}

int main(){
    
    int n;
    int arr[50]={0},size,j,i=0;
    size = sizeof(arr);
    cout<<"Enter number to change :: \n";
    cin>>n;
    i = binaryChange(n,arr,size);
    
    for(j=i-1;j>=0;j--){
        cout<<arr[j];
    }
    
    
}