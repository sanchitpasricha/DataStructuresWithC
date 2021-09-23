#include<iostream>
using namespace std;

void insertionSort(int A[],int n){
	int x,j;
	for(int i=1;i<n;i++){
		j=i-1;
		x=A[i];
		while(j>-1 && A[j]>x){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
}

int main(){
	int i;
	int A[]={2,4,6,3,10,22,1,5};
	insertionSort(A,8);
	for(i=0;i<8;i++){
		cout<<A[i]<<" ";
	}
}
