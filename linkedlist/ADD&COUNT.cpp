#include<iostream>


using namespace std;

struct Node{
	
	int data;
	struct Node *next;
	
}*first=NULL;

void create(int A[],int n){
	
	int i;
	struct Node *t,*last;
	first = new struct Node;
	first -> data=A[0];
	first -> next=NULL;
	last = first;
	
	for(i=1;i<n;i++){
		
		t = new struct Node;
		t -> data=A[i];
		t -> next=NULL;
		last -> next=t;
		last = t;
	}
	
}

void sum(struct Node *p){
	
	int sum = 0;
	while(p!=0){
		sum=sum+p->data;
		p=p->next;
	}
	cout<<sum<<endl;
	
}

int count(struct Node *p){
	
	int cnt = 0;
	while(p!=0){
		cnt=cnt+1;
		p=p->next;
	}
	return cnt;
	
}

void display(struct Node *p){
	
	while(p!=0){
		printf("%d ",p->data);
		p=p->next;
	}
	
}

int main(){
	
	int A[]={1,3,4,54,5,6,34};
	
	create(A,7);
	cout<<count(first)<<endl;
	sum(first);
	display(first);
	
}
