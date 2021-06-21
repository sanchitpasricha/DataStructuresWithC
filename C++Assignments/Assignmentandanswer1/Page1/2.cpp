#include<iostream>
using namespace std;

int function(int x_min, int x_max, int N){
    int i;
    for(i=x_min; i<=x_max; i=i+N){
        cout<<(i*i+2*i+3)/(i-20);
    }
}

int main(){
    int s,l,n;
    cout<<"Enter ::";
    cin>>s>>l>>n;
    function(s,l,n);
}