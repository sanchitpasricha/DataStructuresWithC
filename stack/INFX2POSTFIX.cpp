//CONVERTING INFIX TO POSTFIX

#include<iostream>
#include<string.h>
using namespace std;

class stack{
	private:
		int top;
		char *s;
	public:
		stack();
		~stack();
		void push(char);
		char pop();
		int isEmpty();
		char stackTop();
};

stack::stack(){
	top=-1;
	s=new char[15];
}

stack::~stack(){
	delete[] s;
}

void stack::push(char ch){
	top++;
	s[top]=ch;
}

char stack::pop(){
	char ch;
	ch=s[top];
	top--;
	return ch;
}

int stack::isEmpty(){
	if(top==-1){
		return 1;
	}
	return 0;
}

char stack::stackTop(){
	return s[top];
}

int isOperand(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/'){
		return 0;
	}
	else{
		return 1;
	}
}

int pre(char x){
	if(x=='+' || x=='-'){
		return 1;
	}
	else if(x=='*' || x=='/'){
		return 2;
	}
	return 0;
}

char * convert(char *infix){
	stack st;
	char *postfix = new char[strlen(infix)+1];
	int i=0,j=0;
	
	while(infix[i]!='\0'){
		if(isOperand(infix[i])){
			postfix[j++]=infix[i++];
		}
		else{
			if(pre(infix[i])>pre(st.stackTop())){
				st.push(infix[i++]);
			}
			else{
				postfix[j++]=st.pop();
			}
		}
	}
	
	while(!st.isEmpty()){
		postfix[j++]=st.pop();
	}
	
	postfix[j]='\0';
	
	return postfix;
}

int main(){
	char infix[]={"a+b*c+d/e"};
	char *post;
	post=new char[strlen(infix)+1];
	post=convert(infix);
	
	for(int i=0;i='\0';i++){
		cout<<post[i]<<" ";
	}
}


