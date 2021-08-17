#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void insert(int ele){
	struct Node *t,*last;
	t = new struct Node;
	t -> data=ele;
	t -> next=NULL;
	if(first==NULL){
		first=t;
		last=first;
	}
	else{
		last -> next=
		t;
		last=t;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

void reverseLL(struct Node *p){
	struct Node *q=NULL,*r=NULL;
	while(p){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}

int main(){
	insert(10);
	insert(20);
	insert(30);
	insert(50);
	insert(60);	
	display(first);
	cout<<endl;
	reverseLL(first);
	display(first);	
	
}
