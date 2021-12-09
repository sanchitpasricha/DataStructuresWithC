#include<iostream>
using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int size;
		int *q;
	public:
		Queue(int size);
		~Queue();
		int isFull();
		int isEmpty();
		void emplace(int x);
		int pop();
};

Queue :: Queue(int size){
	this->size=size;
	front=rear=-1;
	q=new int[size];
} 
Queue :: ~Queue(){
	delete[] q;
}

int Queue :: isEmpty(){
	if(front == rear){
		return 1;
	}
	return 0;
}

int Queue :: isFull(){
	if(rear == size-1){
		return 1;
	}
	return 0;
}

void Queue :: emplace(int x){
	if(isFull()){
		cout<<"Queue is full";
	}
	else{
		rear++;
		q[rear]=x;
	}
}

int Queue :: pop(){
	int x;
	if(isEmpty()){
		cout<<"Queue is empty";
	}
	else{
		front++;
		x = q[front];
	}
	return x;
}

void BFS(int vtx, int A[][8], int n){
	Queue q(n);
	int visited[8] = {0};
	
	cout<<vtx<<", "<<flush;
	visited[vtx] = 1;
	q.emplace(vtx);
	
	while(!q.isEmpty()){
		int u = q.pop();
		for(int v=1;v<=n;v++){
			if(A[u][v] == 1 && visited[v] == 0){
				cout<<v<<", "<<flush;
				visited[v] = 1;
				q.emplace(v);
			}
		}
	}
	cout<<endl;
}

int main(){
	int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
                   
    cout << "Vertex: 1 -> " << flush;
    BFS(4, A, 8);
    return 0;
}
