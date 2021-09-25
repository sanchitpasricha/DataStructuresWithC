#include<iostream>
using namespace std;

int maxNumber(int A[],int n){
	int max = A[0]; 
	for(int i=0;i<n;i++){
		if(A[i]>max){
			max = A[i];
		}
	}
	return max;
}

void countSort(int A[],int n){
	int max,i,j;
	int *C;
	max = maxNumber(A,n);
	C = new int[max];
	
	for(i=0;i<max+1;i++){
		C[i]=0;
	}
	for(i=0;i<n;i++){
		C[A[i]]++;
	}
	i=0;j=0;
	while(i<max+1){
		if(C[i]>0){
			A[j++]=i;
			C[i]--;
		}else{
			i++;
		}
	}
}

int main(){
	int A[]={3,5,7,4,12,17,2,1};
	countSort(A,8);
	for(int i=0;i<8;i++){
		cout<<A[i]<<" ";
	}
}
