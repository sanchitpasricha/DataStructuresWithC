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
	first->data=A[0];
	first->prev=first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++){
		t=new struct Node;
		t->data=A[i];
		t->next=NULL;
		t->prev=last;
		last->next=t;
		last=t;
	}
}

void insert(struct Node *p,int ele,int pos){
	struct Node *t,*last;
	int i;
	last=first;
	t=new struct Node;
	t->data=ele;
	t->prev=t->next=NULL;
	if(pos == 0){
		t->next=last;
		last->prev=t;
		first=t;
	}
	else{
		for(i=0;i<pos-1;i++){
			p=p->next;
		}
		t->prev=p;
		t->next=p->next;
		if(p->next){
			p->next->prev=t;
			
		}
		p->next=t;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main(){
	int A[]={1,2,3,4,5};
	create(A,5);
	insert(first,10,1);
	display(first);
}
