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
		void emplace(int x);
		int pop();
		int isFull();
		int isEmpty();
		int topF();
};

stack :: stack(int size){
	this->size=size;
	top=-1;
	s=new int[size];
}

stack :: ~stack(){
	delete[] s;
}

int stack :: isFull(){
	if(top == size-1){
		return 1;
	}
	return 0;
}

int stack :: isEmpty(){
	if(top == -1){
		return 1;
	}
	return 0;
}

void stack :: emplace(int x){
	if(isFull()){
		cout<<"Stack is full";
	}
	else{
		top++;
		s[top]=x;
	}
}

int stack :: pop(){
	int x=1;
	if(isEmpty()){
		cout<<"Stack is empty";
	}
	else{
		x=s[top];
		top--;
	}
	return x;
}

int stack :: topF(){
	if(isEmpty()){
		return -1;
	}
	return s[top];
}

void DFS(int u,int A[][8],int n){
	stack s(n);
	int visited[8] = {0};
	s.emplace(u);
	visited[u]=1;
	cout<<u<<", "<<flush;
	
	int v=0;
	while(!s.isEmpty()){
		while(v<n){
			if(A[u][v] == 1 && visited[v] == 0){
				s.emplace(u);
				u=v;
				cout<<u<<", "<<flush;
				visited[u] = 1;
				v = -1;
			}
			v++;
		}
		v=u;
		u=s.topF();
		s.pop();
	}
}

int main (){
 
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
 
    cout << "DFS Vertex :: "<<endl;
    DFS(5, A, 8);
    cout << endl;
}
