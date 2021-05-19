#include <iostream>

using namespace std;

int swap(int &x, int &y){
    
    int temp;
    temp=x;
    x=y;
    y=temp;
    
}

int main(){
    int num1=10,num2=15,sum;
    swap(num1,num2);
    cout<<num1<<endl<<num2;
    
    return 0;
}