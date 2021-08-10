#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first= new struct Node;
    first ->data = A[0];
    first ->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t = new struct Node;
        t -> data=A[i];
        t -> next=NULL;
        last -> next=t;
        last = t;
    }
}

struct Node * search(struct Node *p,int ele){
	
	while(p){
		if(ele==(p->data)){
			return p;
		}
		else{
			p=p->next;
		}
	}
	
	return p=NULL;
	
}

int main()
{
	struct Node *flag;
    int A[]={3,5,6,7,8,23};
    create(A,6);
    flag=search(first,8);
    if(flag){
    	cout<<flag->data<<" found At = "<<flag;
	}
	else{
		cout<<"Not Found!";
	}
    return 0;
    
}
