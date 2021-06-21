#include<iostream>
using namespace std;
int power(int x, int y){
    int result=1;
    while(y!=0){
        result*=x;    
        y--;
    }
    return result;
}
int main(){
    int x, y;
    cin>>x>>y;
    cout<<power(x,y);
}

