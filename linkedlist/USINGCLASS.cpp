#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class LinkedList{
	private:
		Node *first;
		
	public:
		LinkedList(){
			first=NULL;
		}
		LinkedList(int A[],int n);
		
		void Display();
		int Length();
			
};

LinkedList::LinkedList(int A[],int n){
	int i;
	Node *t,*last;
	first=new Node;
	first -> data=A[0];
	first -> next=NULL;
	last = first;
	
	for(i=1;i<n;i++){
		t=new Node;
		t -> data=A[i];
		t -> next=NULL;
		last -> next=t;
		last = t;
	}
}

void LinkedList::Display(){
	Node *p=first;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int LinkedList::Length(){
	Node *p=first;
	int cnt=0;
	while(p){
		cnt++;
		p=p->next;
	}
	return cnt;
}


int main(){
	int A[]={1,2,3,4,5};
	LinkedList l(A,5);
	l.Display();
	cout<<endl;
	cout<<l.Length();
}
