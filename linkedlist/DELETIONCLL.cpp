#include<iostream>

using namespace std;

class Node{
	public: 
		int data;
		Node *next;
};

class linkedlist{
	private:
		Node *head;
	public:
		linkedlist(){
			head=NULL;
		}
		linkedlist(int A[],int n);
		
		void display();
		void deletion(int pos);
		int length();
};

linkedlist::linkedlist(int A[],int n){
	int i;
	Node *t,*last;
	head=new Node;
	head -> data=A[0];
	head -> next=NULL;
	last = head;
	
	for(i=1;i<n;i++){
		t=new Node;
		t -> data=A[i];
		t -> next=NULL;
		last -> next=t;
		last = t;
	}
	last -> next=head;
}

void linkedlist::deletion(int pos){
	int x,i;
	int len;
	Node *p = head;
	Node *g = NULL;
	if(pos<0 || pos>length()){
		return;
	}
	if(pos==0){
		while(p->next!=head){
			p=p->next;
		}
		p->next=head->next;
		x=head->data;
		delete head;
		head = p->next;
		cout<<endl<<x<<" is deleted!";
	}
	else{
		for(i=0;i<pos-1;i++){
			p=p->next;
		}
		g=p->next;
		p->next=g->next;
		x=g->data;
		delete g;
		cout<<endl<<x<<" is deleted!";
	}
}

int linkedlist::length(){
	Node *p=head;
	int cnt=0;
	do{
		cnt++;
		p=p->next;
	}while(p!=head);
}

void linkedlist::display(){
	Node *p = head;
	do{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
}

int main(){
	int A[]={1,2,3,4,5};
	linkedlist l(A,5);
	l.display();
	l.deletion(1);
	cout<<endl<<"After deletion :: "<<endl;
	l.display();
	l.deletion(0);
	cout<<endl<<"After deletion :: "<<endl;
	l.display();
}
