#include<iostream>
using namespace std;

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
		bool isEmpty();
		bool isFull();
		void display();
};

stack::stack(int size){
	this->size=size;
	top=-1;
	s=new int[size];
}

stack::~stack(){
	delete[] s;
}

bool stack::isEmpty(){
	if(top == -1){
		return 1;
	}
	return 0;
}

bool stack::isFull(){
	if(top == size-1){
		return 1;
	}
	return 0;
}

void stack::push(int x){
	if(isFull()){
		cout<<"Stack overflow";
	}
	else{
		top++;
		s[top]=x;
	}
}

int stack::pop(){
	int x;
	if(isEmpty()){
		cout<<"stack underflow";
	}
	else{
		x=s[top];
		top--;
	}
	return x;
}

void stack::display(){
	for(int i=top;i>=0;i--){
		cout<<s[i]<<" ";
	}
}

void transfer(stack *s1,stack *s2){
	if(s2->isEmpty()){
		if(s1->isEmpty()){
			cout<<"No elements";
		}
		else{
			while(!s1->isEmpty()){
				s2->push(s1->pop());
			}
		}
	}
}

int main(){
	stack st1(5),st2(5);
	st1.push(10);
	st1.push(20);
	st1.push(30);
	st1.push(40);
	st1.push(50);
	st1.display();
	cout<<endl;
	transfer(&st1,&st2);
	st2.display();
}
