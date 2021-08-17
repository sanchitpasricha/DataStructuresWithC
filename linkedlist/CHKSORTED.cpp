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
		last -> next=t;
		last=t;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int check_sorted(struct Node *p){
	int x=INT_MIN;
	while(p){
		if(x>p->data){
			return false;
		}
		else{
			x=p->data;
			p=p->next;
		}
		
	}
	return true;
}

int main(){
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	display(first);
	cout<<endl<<check_sorted(first);
}
