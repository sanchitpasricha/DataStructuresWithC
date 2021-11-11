#include<iostream>
using namespace std;

struct Node{
	struct Node *lchild;
	int data;
	int height;
	struct Node *rchild;
}*root=NULL;

int NodeHeight(struct Node *p){
	int hl,hr;
	hl = p && p->lchild?p->lchild->height:0;
	hr = p && p->rchild?p->rchild->height:0;
	
	return hl>hr?hl+1:hr+1;
}

int BalanceFactor(struct Node *p){
	int hl,hr;
	hl = p && p->lchild?p->lchild->height:0;
	hr = p && p->rchild?p->rchild->height:0;
	
	return hl-hr;
}

struct Node* LLrotation(struct Node *p){
	struct Node *pl=p->lchild;
	struct Node *plr=pl->rchild;
	
	pl->rchild=p;
	p->lchild=plr;
	p->height = NodeHeight(p);
	pl->height = NodeHeight(pl);
	
	if(root == p){
		root = pl;
	}
	
	return pl;
}
struct Node* LRrotation(struct Node* p){
	struct Node *pl=p->lchild;
	struct Node *plr=pl->rchild;
	
	pl->rchild=plr->lchild;
	p->lchild=plr->rchild;
	
	plr->lchild=pl;
	plr->rchild=p;
	
	pl->height=NodeHeight(pl);
	p->height=NodeHeight(p);
	plr->height=NodeHeight(plr);
	
	if(root == p){
		root = plr;
	}
	
	return plr;
}
struct Node* RRrotation(struct Node* p){
	struct Node *pr=p->rchild;
	struct Node *prl=pr->lchild;
	
	pr->lchild=p;
	p->rchild=prl;
	pr->height=NodeHeight(pr);
	p->height=NodeHeight(p);
	
	if(root == p){
		root = pr;
	}
	
	return pr;
}
struct Node* RLrotation(struct Node* p){
	struct Node *pr=p->rchild;
	struct Node *prl=pr->lchild;
	
	p->rchild=prl->lchild;
	pr->lchild=prl->rchild;
	
	prl->rchild=pr;
	prl->lchild=p;
	
	prl->height=NodeHeight(prl);
	p->height=NodeHeight(p);
	pr->height=NodeHeight(pr);
	
	if(root == p){
		root = prl;
	}	
	
	return prl;
}

struct Node *RInsert(struct Node *p,int key){
	struct Node *t=NULL;
	if(p==NULL){
		t = new struct Node;
		t->data=key;
		t->height=1;
		t->lchild=t->rchild=NULL;
		return t;
	}
	if(key<p->data){
		p->lchild=RInsert(p->lchild,key);
	}
	else if(key>p->data){
		p->rchild=RInsert(p->rchild,key);
	}
	
	p->height=NodeHeight(p);
	
	if(BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1){
		return LLrotation(p);
	}
	else if(BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1){
		return LRrotation(p);
	}
	else if(BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1){
		return RRrotation(p);
	}
	else if(BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1){
		return RLrotation(p);
	}
	
	return p;
}

void inorder(Node* p){
    if (p){
        inorder(p->lchild);
        cout << p->data << ", " << flush;
        inorder(p->rchild);
    }
}

int main(){
	root=RInsert(root,100);
	RInsert(root,10);
	RInsert(root,35);
	RInsert(root,75);
	RInsert(root,30);
	RInsert(root,25);
	RInsert(root,21);
	RInsert(root,16);
	RInsert(root,50);
	RInsert(root,45);
	RInsert(root,18);
	RInsert(root,7);
	RInsert(root,6);
	RInsert(root,5);
	RInsert(root,4);

	inorder(root);
}
