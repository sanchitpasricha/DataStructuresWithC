#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int A[],int n){
	int i,j,k;
	for(i=0;i<n-1;i++){
		for(j=k=i;j<n;j++){
			if(A[j]<A[k]){
				k=j;
			}
		}
		swap(&A[i],&A[k]); 
	}
}

int main(){
	int A[]={3,4,33,2,65,42,6,8};
	selectionSort(A,8);
	for(int i=0;i<8;i++){
		cout<<A[i]<<" ";
	}
}
