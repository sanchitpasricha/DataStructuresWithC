#include<iostream>

using namespace  std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int ele){
	struct Node *t,*last;
	t = new struct Node;
	t -> data=ele;
	t -> next=NULL;
	if(first==NULL){
		first = t;
		last = first;
	}
	else{
		last -> next=t;
		last = t;
	}
}

void delete_node(int pos){
	struct Node *p,*j;
	int x;
	p=first;
	if(pos==0){
		x = first->data;
		p = first;
		first = first->next;
		delete p;
	}
	else{
		p =  first;
		j = NULL;
		for(int i=0;i<pos;i++){
			j=p;
			p=p->next;
		}
		if(p){
			j->next=p->next;
			x=p->data;
			delete p;
		}
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main(){
	create(20),
	create(40),
	create(30), //   <- to be deleted
	create(60),
	create(80),
	display(first);
	delete_node(2);
	display(first);
}
