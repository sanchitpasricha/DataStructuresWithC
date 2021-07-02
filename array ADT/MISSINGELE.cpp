#include<iostream>

using namespace std;

int main(){
    int a[10],n,sum=0,s,i;
    cout<<"Enter n max 10";
    cin>>n;
    cout<<"Enter array elements :: ";
    for(i=0;i<11;i++){
        cin>>a[i];
        sum = sum+a[i];
    }
    s=n*(n+1)/2;
    printf("%d ",s-sum);
    
}

//OUTPUT
/*
Enter n max 1012
Enter array elements :: 1 2 3 4 5 6 8 9 10 11 12
7 
*/

