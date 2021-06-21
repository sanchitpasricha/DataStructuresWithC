#include<iostream>
using namespace std;

int prime_function(int n_min, int n_max){
    
    int i,j,flag;
    
    for(i=n_min;i<=n_max;i++){
        if(i==0 || i==1){
            continue;
        }
        
        flag = 1;
        
        for(j=2;j<=i/2;++j){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        
        if(flag==1){
            cout<<i<<" ";
        }
    }
}

int main(){
    int start=0, end=1;
    cout<<"Enter starting number :: ";
    cin>>start;
    cout<<"Enter ending number :: ";
    cin>>end;
    
    prime_function(start,end);
}