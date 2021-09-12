#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*top=NULL;

void push(int x){
	struct Node *t;
	t=new struct Node;
	if(t==NULL){
		cout<<"Stack overflow";
	}
	else{
		t->data=x;
		t->next=top;
		top=t;
	}
}

int pop(){
	int x;
	if(top==NULL){
		cout<<"Stack underflow";
	}
	else{
		x=top->data;
		top=top->next;
	}
	return x;
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	display(top);
	cout<<endl<<pop()<<endl;
	display(top);
	
	return 0;
}
