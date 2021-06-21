#include<iostream>
using namespace std;

int main(){
    enum vowels {A,E,I,O,U};
    vowels v1,v2;
    v1 = A;
    v2 = E;
    if(v1 > v2){
        cout<<"v2 comes before v1";
    }
    else{
        cout<<"v1 comes before v2";
    }
}