#include<iostream>
using namespace std;

int main(){
    int arr[10] = {6,7,8,9,10,11,13,14,15,16};
    int diff = arr[0]-0;
    int i;
    for(i=0;i<10;i++){
        if(arr[i]-i!=diff){
            cout<<i+diff;
            break;
        }
    }
}

//OUTPUT
// 12

