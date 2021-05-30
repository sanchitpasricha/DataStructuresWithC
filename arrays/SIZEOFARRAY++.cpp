#include<iostream>
using namespace std;

int main(){
    int *p,*q;
    int i;
    p=(int *)malloc(5*sizeof(int));
    p[0]=10;
    p[1]=20;
    p[2]=30;
    p[3]=40;
    p[4]=50;
    
    for(i=0;i<10;i++){
        printf("%d ",p[i]);
    }
    
    printf("\n");
    
    q=(int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++){
        q[i]=p[i];
    }
    
    free(p);
    p=q;
    q=NULL;
    for(i=0;i<10;i++){
        printf("%d ",p[i]);
    }
}

//OUTPUT
//10 20 30 40 50 0 132049 0 0 0 

//10 20 30 40 50 0 0 0 0 0 

