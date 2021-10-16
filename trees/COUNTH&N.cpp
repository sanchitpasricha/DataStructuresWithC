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
		bool isEmpty();
		bool isFull();
		void enqueue(Node* x);
		Node* dequeue();
};

Queue::Queue(int size){
	this->size=size;
	front = -1;
	rear = -1;
	Q=new Node* [size];
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
	if(rear==front){
		return true;
	}
	return false;
}

void Queue::enqueue(Node* x){
	if(isFull()){
		cout<<"Queue Overflow"<<endl;
	}
	else{
		rear++;
		Q[rear]=x;
	}
}

Node* Queue::dequeue(){
	Node* x=NULL;
	if(isEmpty()){
		cout<<"Queue is empty";
	}
	else{
		front++;
		x=Q[front];
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
	root->data=x;;
	root->lchild=NULL;
	root->rchild=NULL;
	q.enqueue(root);
	
	while(!q.isEmpty()){
		p=q.dequeue();
		cout<<"Enter left child value of "<<p->data<<" :: ";
		cin>>x;
		if(x!=-1){
			t=new Node;
			t->data=x;
			t->lchild=NULL;
			t->rchild=NULL;
			p->lchild=t;
			q.enqueue(t);
		}
		
		cout<<"Enter right child value of "<<p->data<<" :: ";
		cin>>x;
		if(x != -1){
			t=new Node;
			t->data=x;
			t->lchild=NULL;
			t->rchild=NULL;
			p->rchild=t;
			q.enqueue(t);
		}
	}
}

int countHeight(Node* root){
	int x=0,y=0;
	if(root==0){
		return 0;
	}
	x=countHeight(root->lchild);
	y=countHeight(root->rchild);
	if(x>y){
		return x+1;
	}
	else{
		return y+1;
	}
	
}

int countNode(Node* root){
	if(root){
		return countNode(root->lchild)+countNode(root->rchild)+1;
	}
	return 0;
}

int main(){
	createTree();
	cout<<countHeight(root);
	cout<<endl;
	cout<<countNode(root);
}
