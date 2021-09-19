#include<iostream>
using namespace std;

class DEqueue{
	private:
		int size;
		int front;
		int rear;
		int *q;
	public:
		DEqueue(int size);
		~DEqueue();
		void display();
		void enqueueFront(int x);
		void enqueueRear(int x);
		int dequeueFront();
		int dequeueRear();
		bool isEmpty();
		bool isFull();
};

DEqueue::DEqueue(int size){
	this->size=size;
	front=rear=-1;
	q=new int[size];
}

DEqueue::~DEqueue(){
	delete[] q;
}

bool DEqueue::isEmpty(){
	if(front==rear){
		return true;
	}
	return false;
}

bool DEqueue::isFull(){
	if(rear==size-1){
		return true;
	}
	return false;
}

void DEqueue::enqueueRear(int x){
	if(isFull()){
		cout<<"Queue is filled";
	}
	else{
		rear++;
		q[rear]=x;
	}
}

void DEqueue::enqueueFront(int x){
	if(front == -1){
		cout<<"Queue is empty";
	}
	else{
		q[front]=x;
		front--;
	}
}

int DEqueue::dequeueFront(){
	int x = -1;
	if(isEmpty()){
		cout<<"DEqueue Underflow";
	}
	else{
		x = q[front]; 
		front++;
	}
}

int DEqueue::dequeueRear(){
	int x=-1;
	if(rear == -1){
		cout<<"Queue underflow";
	}
	else{
		x=q[rear];
		rear--;
	}
}

void DEqueue::display(){
	for(int i=front+1;i<=rear;i++){
		cout<<q[i]<<" ";
	}
}

int main(){
	class DEqueue dq(10);
	dq.enqueueRear(10);
	dq.enqueueRear(20);
	dq.enqueueRear(30);
	dq.dequeueFront();
	dq.enqueueFront(40);
	dq.dequeueRear();
	dq.display();
}
