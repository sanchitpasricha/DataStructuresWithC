#include<iostream>
using namespace std;

int fib(int arr[],int n,int x1,int x2){
    int i,s=0;
    for(i=0;i<n;i++){
      s = x1 + x2;
	  x1 = x2;
	  x2 = s;
	  arr[i]=s;
    }
}

int main(){
    
    int i,n,arr[50],x1,x2;
    cout<<"Enter x1 :: ";
    cin>>x1;
    cout<<"Enter x2 :: ";
    cin>>x2;
    cout<<"Number of values required :: ";
    cin>>n;
    fib(arr,n,x1,x2);
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}