#include<iostream>
#define SIZE 10
using namespace std;

int hash(int key){
	return key%SIZE;
}

int quadraticProbe(int H[],int key){
	int index = hash(key);
	int i=0;
	while(H[(index+i*i)%SIZE] != 0){
		i++;
	}
	return (index+i*i)%SIZE;
}

int insert(int H[],int key){
	int index = hash(key);
	if(H[index] != 0){
		index = quadraticProbe(H,key);
	}
	H[index]=key;
}

int search(int H[],int key){
	int index = hash(key);
	int i = 0;
	while(H[(index+i*i)%SIZE] != key){
		i++;
		if(H[(index+i*i)%SIZE] == 0){
			return -1;
		}
	}
	return (index+i*i)%SIZE;
}

int main(){
	int A[] = {26, 30, 45, 23, 25, 43, 74, 19, 29};
	int n = sizeof(A)/sizeof(A[0]);
	
	int HT[10] = {0};
    for (int i=0; i<n; i++){
        insert(HT, A[i]);
    }
    int index = search(HT, 25);
    cout << "key found at: " << index << endl;
}

	
