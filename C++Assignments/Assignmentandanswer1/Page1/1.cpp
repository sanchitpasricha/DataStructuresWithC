#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float sum=0;
    int x, n;
    cout<<"Enter the value of x and n";
    cin>>x>>n;
    for(int i=0; i<=n; i++){
        sum+= (pow(-1,n))*(pow(x,n/2))/(n+1);
    }
    cout<<sum;
}