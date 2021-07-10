#include<iostream>
using namespace std;

int validate(char A[]){
    
    int i;
    for(i=0;A[i] != '\0';i++){
        if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=48 && A[i]<=57)){
            return 0;
        }
    }
    return 1;
}

int main(){
    
    char A[] = "sanc&hit129";
    int flag;
    flag = validate(A);
    if(flag == 1){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
    
}