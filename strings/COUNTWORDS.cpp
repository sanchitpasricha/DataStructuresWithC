#include<iostream>
using namespace std;

int word_count(char A[]){
    
    int i,word=1;
    for(i=0;A[i] != '\0';i++){
        if(A[i]==' ' && A[i-1] != ' '){
            word++;
        }
    }
    return word;
    
}

int main(){
    
    char A[] = "how are  you   doing sanchit";
    int word = word_count(A);
    cout<<word;
}