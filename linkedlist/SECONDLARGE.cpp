#include <iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[], int n){
	
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

int listSize(struct Node* p)
{
    int cnt = 0;
 
    while (p) {
        cnt++;
        p=p->next;
    }
 
    return cnt;
}

void print2largest(struct Node* head)
{
    int i, first, second;
    int list_size = listSize(head);
 
    if (list_size < 2) {
        cout << "Invalid Input";
        return;
    }
 
    first = second = INT_MIN;
 
    struct Node* temp = head;
 
    while (temp != NULL) {
        if (temp->data > first) {
            second = first;
            first = temp->data;
        }
        else if (temp->data > second && temp->data != first)
            second = temp->data;
 
        temp = temp->next;
    }
 
    if (second == INT_MIN)
        cout << "There is no second largest element\n";
    else
        cout << "The second largest element is :: " << second;
}

int main(){
	int A[]={1,2,3,4,5,6,7,8,9};
	create(A,9);
	print2largest(first);
}
