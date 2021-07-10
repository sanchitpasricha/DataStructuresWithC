#include<iostream>
using namespace std;

void case_change(char A[]){
    
    int i;
    for(i=0;i<A[i]!='\0';i++){
        
        if(A[i]>=65 && A[i]<=90){
            A[i] += 32;
        }
        else if(A[i]>='a' && A[i]<=122){
            A[i] -= 32;
        }
    }
}

int main(){
    char A[] = "wElcOMe";
    cout<<A<<endl;
    case_change(A);
    cout<<A;
    
}

//OUTPUT
/*
wElcOMe

WeLComE

*/
