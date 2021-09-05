#include<iostream>

using namespace std;

struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n){
	int i;
	struct Node *t,*last;
	first=new struct Node;
	first -> data=A[0];
	first->prev=first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++){
		t=new struct Node;
		t -> data=A[i];
		t -> next=NULL;
		t -> prev=last;
		last->next=t;
		last=t;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main(){
	int A[]={10,20,30,40,50};
	create(A,5);
	display(first);
}
