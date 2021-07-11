#include<iostream>
using namespace std;

void rev_using_arr(char A[]){
    
    int i,j;
    char B[8];
    for(i=0;A[i] != '\0';i++){}
    i--;
    for(j=0;i>=0;i--,j++){
        B[j] = A[i];
    }
    B[j] ='\0';
    cout<<B;
    
}

void reverse_string(char A[]){
    
    int i,j;
    char t;
    for(j=0;A[j] != '\0';j++){}
    j--;
    for(i=0;i<j;i++,j--){
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
    
}

int main(){
    
    char A[] = "Sanchit";
    // rev_using_arr(A);
    reverse_string(A);
    cout<<A;
}