#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class ClinkedList{
	private:
		Node *head;
	public:
		ClinkedList(){
			head=NULL;
		}
		ClinkedList(int A[],int n);
		
		void insert(int index,int x);
		void display();
		int length();
};

ClinkedList::ClinkedList(int A[],int n){
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
	last->next=head;
}

void ClinkedList::insert(int index,int x){
	
	Node *p=head;
	int i;
	Node *t;
	if(index<0 || index>length()){
		return;
	}
	if(index==0){
		t=new Node;
		t -> data=x;
		while(p->next!=head){
			p=p->next;
		}
		p->next=t;
		t -> next=head;
		head=t;
	}
	else{
		for(i=0;i<index-1;i++){
			p=p->next;
		}
		t=new Node;
		t -> data=x;
		t->next=p->next;
		p->next=t;
	}
}

int ClinkedList::length(){
	Node *p=head;
	int cnt=0;
	do{
		cnt++;
		p=p->next;
	}while(p!=head);
	return cnt;
}

void ClinkedList::display(){
	Node *p = head;
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
}

int main(){
	int A[]={1,2,3,4,5};
	ClinkedList l(A,5);
	l.display();
	l.insert(1,20);
	cout<<endl;
	l.display();
	
}
