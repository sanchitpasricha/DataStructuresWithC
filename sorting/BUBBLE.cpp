#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int A[],int n){
	int flag;
	for(int i=0;i<n-1;i++){
		flag=0;
		for(int j=0;j<n-1;j++){
			if(A[j]>A[j+1]){
				swap(&A[j],&A[j+1]);
				flag=1;
			}	
		}
		if(flag==0){
			break;
		}
	}
}

int main(){
	int A[]={8,4,6,5,2,1,10,20,66,7,12};
	bubbleSort(A,11);
	for(int i=0;i<11;i++){
		cout<<A[i]<<" ";
	}
}
