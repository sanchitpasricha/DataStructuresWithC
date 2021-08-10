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

int max(struct Node *p){
	
	int max = INT_MIN;
	while(p){
		if(max<(p->data)){
			max=(p->data);
		}
		p=p->next;
	}
	return max;
	
}

int main(){
	int A[]={1,12,55,2234,33,57,4,3,2};
	
	create(A,9);
	cout<<max(first);
}
