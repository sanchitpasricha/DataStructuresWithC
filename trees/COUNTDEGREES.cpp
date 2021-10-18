#include<iostream>
using namespace std;

class Node{
	public:
	Node* lchild;
	int data;
	Node* rchild;
};

class Queue{
	private:
		int size;
		int front;
		int rear;
		Node** Q;
	public:
		Queue(int size);
		~Queue();
		bool isFull();
		bool isEmpty();
		void enqueue(Node* x);
		Node* dequeue();
};

Queue::Queue(int size){
	this->size=size;
	front=rear=-1;
	Q = new Node* [size];
}

Queue::~Queue(){
	delete [] Q;
}

bool Queue::isFull(){
	if(rear == size-1){
		return true;
	}
	return false;
}

bool Queue::isEmpty(){
	if(rear == front){
		return true;
	}
	return false;
}

void Queue::enqueue(Node* x){
	if(isFull()){
		cout<<"Queue is full";
	}else{
		rear++;
		Q[rear] = x;
	}
}

Node* Queue::dequeue(){
	Node* x=NULL;
	if(isEmpty()){
		cout<<"Queue is empty";
	}else{
		front++;
		x = Q[front];
	}
	return x;
}

Node* root = new Node;

void createTree(){
	Node* p;
	Node* t;
	
	int x;
	Queue q(10);
	cout<<"Enter root value :: ";
	cin>>x;
	root->data=x;
	root->lchild=NULL;
	root->rchild=NULL;
	q.enqueue(root);
	
	while(!q.isEmpty()){
		p=q.dequeue();
		
		cout<<"Enter value of left child of "<<p->data<<" :: ";
		cin>>x;
		
		if(x != -1){
			t = new Node;
			t-> data = x;
			t->lchild=NULL;
			t->rchild=NULL;
			p->lchild=t;
			q.enqueue(t);
		}
		
		cout<<"Enter value of right child of "<<p->data<<" :: ";
		cin>>x;
		
		if(x != -1){
			t = new Node;
			t-> data = x;
			t->lchild=NULL;
			t->rchild=NULL;
			p->rchild=t;
			q.enqueue(t);
		}
	}
}

void preorder(Node* p){
	if(p){
		cout<<p->data<<", ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

int countLeaf(Node* p){
	int x,y;
	if(p != NULL){
		x=countLeaf(p->lchild);
		y=countLeaf(p->rchild);
		if(p->lchild == NULL && p->rchild == NULL){
			return x+y+1;
		}else{
			return x+y;
		}
	}
	return 0;
}

int countD2(Node* p){
	int x,y;
	if(p!=NULL){
		x=countD2(p->lchild);
		y=countD2(p->rchild);
		if(p->lchild != NULL && p->rchild != NULL){
			return x+y+1;
		}else{
			return x+y;
		}
	}
}

int countD1(Node* p){
	int x,y;
	if(p!=NULL){
		x=countD1(p->lchild);
		y=countD1(p->rchild);
		if(p->lchild != NULL ^ p->rchild != NULL){
			return x+y+1;
		}else{
			return x+y;
		}
	}
}

int main(){
	createTree();
	preorder(root);
	cout<<endl<<"Total Number of leaf nodes :: "<<countLeaf(root);
	cout<<endl<<"Total Nodes with degree 2 :: "<<countD2(root);
	cout<<endl<<"Total Nodes with exactly degree 1 :: "<<countD1(root);
}
