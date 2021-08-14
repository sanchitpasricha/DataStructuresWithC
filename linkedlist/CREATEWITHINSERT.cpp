#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void insertCreate(int ele){
	
	struct Node *t,*last;
	t = new struct Node;
	t -> data=ele;
	t -> next=NULL;
	if(first==NULL){
		first=last=t;
	}
	else{
		last->next=t;
		last = t;
	}
	
}

void display(){
	struct Node *p=first;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main(){
	insertCreate(20);
	insertCreate(10);
	insertCreate(30);
	insertCreate(50);
	insertCreate(40);
	insertCreate(60);
	display();
}
