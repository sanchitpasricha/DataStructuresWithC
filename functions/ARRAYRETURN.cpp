#include <iostream>

int * function(int n){
    int *p;
    p=(int *)malloc(n*sizeof(int));
    p[0]=5;
    p[1]=10;
    p[2]=15;
    return(p);
}

int main(){
    int *a;
    a=function(5);
    
    for(int i=0;i<5;i++){
       printf("%d\n",a[i]);
    }
}