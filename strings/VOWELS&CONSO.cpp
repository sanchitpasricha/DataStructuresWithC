#include<iostream>
using namespace std;

int main(){
    
    char A[] = "Hello i am Sanchit";
    int i;
    int vcount,ccount;
    for(i=0;A[i]!='\0';i++){
        
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
        {
            vcount++;
        }
        else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122)){
            ccount++;
        }
    }
    cout<<"Vowels "<<vcount<<endl;
    cout<<"Consonants "<<ccount;
    
}