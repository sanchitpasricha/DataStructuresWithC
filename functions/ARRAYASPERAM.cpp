#include <iostream>

using namespace std;

void function(int A[]/*this is a poiter*/){
    cout<<sizeof(A)/*this will give 8 as its a pointer*/ /sizeof(int)/*this will give 4*/<<endl;
}

int main(){
    int A[]={2,3,4,5,6};
    int n=sizeof(A);
    function(A);
    cout<<sizeof(A)/*this will give 5 as its a array*//sizeof(int)/*this will give 4*/<<endl;
    
    for(int x:A){
        cout<<x<<" ";
    }
    
    return 0;
    
}

//OUTPUT
/*
2
5
2 3 4 5 6