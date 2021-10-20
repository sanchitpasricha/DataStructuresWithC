#include<iostream>
using namespace std;

class Node{
	public:
	Node* lchild;
	int data;
	Node* rchild;
};

class stack{
	private:
		int size;
		int top;
		Node** s; //a pointer of type Node pointer
	
	public:
		stack(int size);
		~stack();
		void push(Node* x);
		Node* pop();
		bool isFull();
		bool isEmpty();
		Node* stackTop();
};

stack::stack(int size){
	this->size=size;
	top=-1;
	s=new Node*;
}

stack::~stack(){
	delete [] s;
}

bool stack::isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}

bool stack::isFull(){
	if(top==size-1){
		return true;
	}
	return false;
}

void stack::push(Node* x){
	if(isFull()){
		cout<<"stack is full !";
	}else{
		top++;
		s[top] = x;
	}
}

Node* stack::pop(){
	Node* x;
	if(isEmpty()){
		cout<<"stack is alreay empty !";
	}else{
		x=s[top];
		top--;
	}
	return x;
}

Node* stack::stackTop(){
	if(isEmpty()){
		return NULL;
	}
	return s[top];
}

Node* root = new Node;

void createPreorder(int pre[],int n){
	stack stk(10);
	Node* t;
	Node* p;
	int i=0;
	root->data=pre[i++];
	root->lchild=root->rchild=NULL;
	p=root;
	
	while(i<n){
		if(pre[i] < p->data){
			t=new Node;
			t->data=pre[i++];
			t->lchild=NULL;
			t->rchild=NULL;
			p->lchild=t;
			stk.push(p);
			p=t;
		}
		else{
			if(pre[i] > p->data && pre[i] < stk.isEmpty() ? 32767 : stk.stackTop()->data){
				t=new Node;
				t->data=pre[i++];
				t->lchild=NULL;
				t->rchild=NULL;
				p->rchild=t;
				p=t;
			}
			else{
				p=stk.pop();
			}
		}
	}
}

Node* inorder(Node* p){
	if(p){
		inorder(p->lchild);
		cout<<p->data<<", ";
		inorder(p->rchild);
	}
}

int main(){
	int arr[]={20,30,10,50,40,45};
	createPreorder(arr,6);
	inorder(root);
	
	return 0;
}
