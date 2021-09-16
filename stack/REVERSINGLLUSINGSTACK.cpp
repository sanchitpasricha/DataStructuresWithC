#include<iostream>
using namespace std;

//structure for linked list
struct Node{
	int data;
	struct Node *next;
}*first=NULL;

//function to create linked list
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

//initialising stack
class stack{
	private:
		int size;
		int top;
		int *s;
	public:
		stack(int size);
		~stack();
		void push(int x);
		int pop();
		int isEmpty();
		int isFull();
		void display();
};

//declaring stack functions
stack::stack(int size){
	this->size=size;
	top=-1;
	s=new int[size];
}

//declaring stack functions
stack::~stack(){
	delete[] s;
}

//declaring stack functions
int stack::isEmpty(){
	if(top==-1){
		return 1;
	}
	return 0;
}

//declaring stack functions
int stack::isFull(){
	if(top==size-1){
		return 1;
	}
	return 0;
}

//declaring stack functions
void stack::push(int x){
	if(isFull()){
		cout<<"Stack overflow";
	}
	else{
		top++;
		s[top]=x;
	}
}

//declaring stack functions
int stack::pop(){
	int x;
	x=s[top];
	top--;
	return x;
}

//declaring stack functions
void stack::display(){
	int i;
	for(i=top;i>=0;i--){
		cout<<s[i]<<endl;
	}
}

void reverse(struct Node *p,stack *st){
	while(p){
		st->push(p->data);
		p=p->next;
	}
}


int main(){
	int A[]={10,20,30,40,50};
	create(A,5);
	stack st(5);
	reverse(first,&st);
	st.display();
}
