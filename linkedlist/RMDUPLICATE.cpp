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

void rm_duplicate(struct Node *p){
	struct Node *q;
	p=first;
	q=p->next;
	while(q){
		if(p->data != q->data){
			p=q;
			q=q->next;
		}
		else{
			p->next=q->next;
			delete q;
			q=p->next;
		}
	}
}

int main(){
	insert(10);
	insert(20);
	insert(30);
	insert(30);
	insert(50);
	insert(60);
	insert(60);	
	display(first);
	cout<<endl;
	rm_duplicate(first);
	display(first);
}
