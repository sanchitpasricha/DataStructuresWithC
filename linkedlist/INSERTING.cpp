#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n){
	int i;
	struct Node *t,*last;
	first = new struct Node;
	first -> data=A[0];
	first -> next=NULL;
	last = first;
	
	for(i=1;i<n;i++){
		t = new struct Node;
		t -> data=A[i];
		t -> next=NULL;
		last -> next=t;
		last = t;
	}
}

void insert(int pos,int ele){
	int i;
	struct Node *p,*t;
	if(pos==0){
		t = new struct Node;
		t -> data=ele;
		t ->next=first;
		first = t;
	}
	else if(pos>0){
		p = first;
		for(i=0;i<pos-1;i++){
			p=p->next;
		}
		if(p){
			t = new struct Node;
			t -> data=ele;
			t ->next = p->next;
			p ->next = t;
		}
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
	    p=p->next;
	}

}

int main(){
	int A[] = {1,2,3,4,5,6,7,8};
	create(A,8);
	insert(4,10);
	display(first);
}
