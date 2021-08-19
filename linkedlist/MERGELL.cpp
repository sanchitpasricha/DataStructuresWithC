#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int A[],int n){
	int i;
	struct Node *t,*last;
	first = new struct Node;
	first -> data=A[0];
	first -> next=NULL;
	last = first;
	
	for(i=1;i<n;i++){
		t=new struct Node;
		t -> data=A[i];
		t -> next=NULL;
		last -> next=t;
		last = t;
	}
}

void create2(int B[],int n){
	int i;
	struct Node *t,*last;
	second = new struct Node;
	second -> data=B[0];
	second -> next=NULL;
	last = second;
	
	for(i=1;i<n;i++){
		t=new struct Node;
		t -> data=B[i];
		t -> next=NULL;
		last -> next=t;
		last = t;
	}
}

void merge(){
	struct Node *last;
	if(first->data < second->data){
		third=last=first;
		first=first->next;
		last -> next=NULL;
	}
	else{
		third=last=second;
		second=second->next;
		last -> next=NULL;
	}
	while(first != NULL && second != NULL){
		if(first->data < second->data){
			last -> next=first;
			last = first;
			first=first->next;
			last->next=NULL;
		}
		else{
			last -> next=second;
			last = second;
			second=second->next;
			last->next=NULL;
		}
	}
	if(first){
		last->next=first;
	}
	else{
		last->next=second;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main(){
	int A[]={20,50,70,90,100};
	int B[]={10,30,40,60,80};
	create(A,5);
	create2(B,5);
	display(first);
	cout<<endl;
	display(second);
	merge();
	cout<<endl;
	display(third);
}
