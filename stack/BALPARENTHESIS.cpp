#include<iostream>
#include<string.h>
using namespace std;

class stack{
	private:
		int size;
		int top;
		char *s;
	public:
		stack(int size);
		~stack();
		void push(char x);
		char pop();
		int isEmpty();
		int isFull();
		void display();
};

stack::stack(int size){
	this->size=size;
	top=-1;
	s=new char[size];
}

stack::~stack(){
	delete[] s;
}

void stack::push(char x){
	if(isFull()){
		cout<<"Stack Overflow";
	}
	else{
		top++;
		s[top]=x;
	}
}

char stack::pop(){
	char x;
	if(isEmpty()){
		cout<<"Stack Underflow";
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

int checkBrackets(char *string){
	stack st(strlen(string));
	for(int i=0;i<strlen(string);i++){
		if(string[i]=='('){
			st.push(string[i]);
		}
		else if(string[i]==')'){
			if(st.isEmpty()){
				return 0;
			}
			else{
				st.pop();
			}
		}
	}
	return st.isEmpty()?1:0;
}

int main(){
	char ch;
	char string[]={"(a+b+c)*(1*f)*(d+z*(f-5)))"};
	cout<<checkBrackets(string);
}
