#include<iostream>
using namespace std;

int swap(int *a,int *b){
	int temp;
	temp= *a;
	*a = *b;
	*b = temp;
}

void deletee(int A[],int n){
	int x,i,j;
	x=A[n]; 
	A[1]=A[n]; //deleting first element by placing last most element
	i=1;  // i on first
	j=2*i; // j on i's child
	while(j<n-1){
		if(A[j+1] > A[j]){
			j=j+1;
		}
		if(A[i] < A[j]){
			swap(A[i],A[j]);
			i=j;
			j=2*j;
		}
		else{
			break;
		}
	}
	A[n]=x;
}

int main(){
	int A[]={0,40,20,10,5,30,25,15};
	deletee(A,7);
	for(int i=1;i<=7;i++){
		cout<<A[i]<<" ";
	}
}

