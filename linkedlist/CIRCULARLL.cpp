#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class C_linkedList{
	private:
		Node *head;
	public:
		C_linkedList(){
			head = NULL;
		}
		C_linkedList(int A[],int n);
		
		void displayCLL();
		
};

C_linkedList::C_linkedList(int A[],int n){
	int i;
	Node *t,*last;
	head = new Node;
	head -> data=A[0];
	head -> next=NULL;
	last = head;
	
	for(i=1;i<n;i++){
		t = new Node;
		t -> data=A[i];
		t -> next=NULL;
		last -> next=t;
		last = t;
	}
	last -> next=head;
}

void C_linkedList::displayCLL(){
	Node *p = head;
	do{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
}

int main(){
	int A[]={1,2,3,4,5};
	C_linkedList l(A,5);
	l.displayCLL();
}
