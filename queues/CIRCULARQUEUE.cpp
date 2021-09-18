#include<iostream>
using namespace std;

class Queue{
	private:
		int size;
		int front;
		int rear;
		int *q;
	public:
		Queue(int size);
		~Queue();
		int isFull();
		int isEmpty();
		void enqueue(int x);
		int dequeue();
		void display();
};

Queue::Queue(int size){
	this->size=size;
	front=rear=-1;
	q=new int[size];
}

Queue::~Queue(){
	delete[] q;
}

int Queue::isEmpty(){
	if(rear==front){
		return 1;
	}
	return 0;
}

int Queue::isFull(){
	if((rear+1)%size==front){
		return 1;
	}
	return 0;
}

void Queue::enqueue(int x){
	if(isFull()){
		cout<<"Queue is full";
	}
	else{
		rear=(rear+1)%size;
		q[rear]=x;
	}
}

int Queue::dequeue(){
	int x;
	if(isEmpty()){
		cout<<"Queue is empty";
	}
	else{
		front=(front+1)%size;;
		x=q[front];
	}
}

void Queue::display(){
	int i;
	for(i=front+1;i<=rear;i++){
		cout<<q[i]<<" ";
	}
}

int main(){
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);	
	q.dequeue();
	q.dequeue();
	q.enqueue(70);
	q.enqueue(80);
	q.display();
}
