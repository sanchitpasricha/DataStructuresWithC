#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL,*second=NULL;

class stack{
	private:
		int size;
		int top;
		int *s;
	public:
		stack();
		~stack();
		void push(struct Node *p);
		int pop();
		int isEmpty();
		int isFull();
		void display();
};
stack::stack(){
	size=10;
	top=-1;
	s=new int[size];
}

stack::~stack(){
	delete[] s;
}
void stack::push(struct Node *p){
	while(p){
		top++;
		s[top]=p->data;
		p=p->next;
	}
}
void stack::display(){
	for(int i=top;i>=0;i--){
		cout<<s[i]<<" ";
	}
}


void create1(int A[],int n){
	int i;
	struct Node *t,*last;	
	first=new struct Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++){
		t=new struct Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void create2(int A[],int n){
	int i;
	struct Node *t,*last;	
	second=new struct Node;
	second->data=A[0];
	second->next=NULL;
	last=second;
	
	for(i=1;i<n;i++){
		t=new struct Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

// Used to create question for implementation.
void createIntersetion(){
	struct Node *p=first,*q=second;
	for(int i=0;i<5;i++){
		p=p->next;
	}
	while(true){
		q=q->next;
		break;
	}
	q->next=p;
}
// Used to create question for implementation.

int stack::pop(){
	int x;
	x=s[top];
	top--;
	
	return x;
}

checkIntersection(stack st,stack st2){
	int x=0;
	while(st.pop()==st2.pop()){
		st.pop();
		st2.pop();
		x=st.pop();
	}
	cout<<endl<<"Intersection point of 2 Linked List :: "<<x;
}

int main(){
	int A[]={1,2,3,4,5,100,200,300};
	int B[]={6,7};
	
	stack st,st2;
	create1(A,8);
	st.push(first);
	st.display();
	create2(B,2);
	createIntersetion();
	st2.push(second);
	cout<<endl;
	st2.display();
	checkIntersection(st,st2);
	
	return 0;
}
