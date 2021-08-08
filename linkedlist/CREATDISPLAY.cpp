#include <stdio.h>
#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first ->data = A[0];
    first ->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t -> data=A[i];
        t -> next=NULL;
        last -> next=t;
        last = t;
    }
}

void Display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int A[]={3,5,6,7,8,23};
    create(A,6);
    
    Display(first);
    
    return 0;
    
}
