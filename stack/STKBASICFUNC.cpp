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
		int isFull();
		int isEmpty();
		void display();
		int stackTop();
};

stack::stack(int size){
	this->size=size;
	top=-1;
	s=new int[size];
}

stack::~stack(){
	delete[] s;
}

void stack::push(int x){
	if(isFull()){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		s[top]=x;
	}
}

int stack::pop(){
	int x=1;
	if(isEmpty()){
		cout<<"Stack underflow"<<endl;
	}
	else{
		x=s[top];
		top--;
	}
	return x;
}

int stack::isFull(){
	if(top==size-1){
		return 1;
	}
	return 0;
}

int stack::isEmpty(){
	if(top==-1){
		return 1;
	}
	return 0;
}

void stack::display(){
	for(int i=top;i>=0;i--){
		cout<<s[i]<<endl;
	}
}

int stack::stackTop(){
	if(isEmpty()){
		return -1;
	}
	return s[top];
}

int main(){
	int A[]={10,20,30,40,50};
	
	stack stk(sizeof(A)/sizeof(A[0]));
	for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
		stk.push(A[i]);
	}
	cout<<stk.isFull()<<endl;
	cout<<stk.stackTop()<<endl;
	stk.pop();
	cout<<stk.stackTop()<<endl;
	stk.pop();
	stk.pop();
	stk.pop();
	stk.pop();
	stk.pop();
	cout<<stk.isEmpty()<<endl;
	stk.display();
	stk.push(100);
	stk.push(200);
	stk.display();
	cout<<stk.isEmpty();
}

//OUTPUT ::

//1
//50
//40
//Stack underflow
//1
//200
//100
//0
