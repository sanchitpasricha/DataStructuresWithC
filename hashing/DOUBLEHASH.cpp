#include<iostream>
#define SIZE 10
#define PRIME 7
using namespace std;

int hash(int key){
	return key%SIZE;
}

int primehash(int key){
	return PRIME-(key%PRIME);
}

int DoubleHash(int H[],int key){
	int index = hash(key);
	int i=0;
	while(H[(hash(index)+i*primehash(key))%SIZE] != 0){
		i++;
	}
	return (index+i*primehash(key)) % SIZE;
}

int insert(int H[],int key){
	int index = hash(key);
	if(H[index] != 0){
		index = DoubleHash(H,key);
	}
	H[index]=key;
}

int search(int H[],int key){
	int index = hash(key);
	int i=0;
	while(H[(hash(index)+i*primehash(key))%SIZE] != key){
		i++;
		if(H[(hash(index)+i*primehash(key))%SIZE] == 0){
			return -1;
		}
	}
	return (hash(index)+i*primehash(key))%SIZE;
}

int main(){
	int HT[SIZE]={0};
	insert(HT,5);
	insert(HT,25);
	insert(HT,15);
	insert(HT,35);
	insert(HT,95);
	
	int index = search(HT,95);
	cout<<index;
	
	
}
