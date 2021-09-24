#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int A[],int l,int h){
	int pivot = A[l];
	int i=l,j=h;
	
	do{
		do{
			i++;
		}while(A[i]<=pivot);
		do{
			j--;
		}while(A[j]>pivot);
		if(i<j){
			swap(&A[i],&A[j]);
		}
	}while(i<j);
	swap(A[l],A[j]);
	return j;
}

int quickSort(int A[],int l,int h){
	int j;
	
	if(l<h){
		j=partition(A,l,h);
		quickSort(A,l,j);
		quickSort(A,j+1,h);
	}
}

int main(){
	int A[]={3,78,8,7,44,23,85,11};
	quickSort(A,0,8);
	for(int i=0;i<8;i++){
		cout<<A[i]<<" ";
	}
}
