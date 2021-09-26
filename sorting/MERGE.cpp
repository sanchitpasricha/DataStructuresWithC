#include<iostream>
using namespace std;

// function to merge arrays
void merge(int A[],int l,int mid,int h){
	int i=l,j=mid+1,k=l;

	int B[100];
	
	while(i<=mid && j<=h){
		if(A[i]<A[j]){
			B[k++] = A[i++];
		}
		else{
			B[k++] = A[j++];
		}
	}
	for(;i<=mid;i++){
		B[k++] = A[i];
	}
	for(;j<=h;j++){
		B[k++] = A[j];
	}
	
//copying back elements to array A
	for(i=l;i<=h;i++){
		A[i]=B[i];
	}
	
}

void mergeSort(int A[],int n){
	int p,i,l,mid,h;
	for(p=2;p<=n;p=p*2){
		for(i=0;i+p-1<n;i=i+p){
			l = i;
			h = i+p-1;
			mid = (l+h)/2;
			merge(A,l,mid,h);		
		}
		if(n-i>p/2){
		    l = i;
		    h = i+p-1;
		    mid = (l+h)/2;
		    merge(A,l,mid,n-1);
		}
	}
	if(p/2<n){
	    merge(A,0,p/2-1,n-1);
	}
}

int main(){
	int A[]={2,6,3,44,32,7,1,98};
	mergeSort(A,8);
	for(int i=0;i<8;i++){
		cout<<A[i]<<" "; 
	}
	return 0;
}

