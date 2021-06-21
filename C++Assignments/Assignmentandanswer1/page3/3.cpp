#include<iostream>
using namespace std;
void swap (int &n1, int &n2) 
{
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
}
int main()
{
        int a,b;
        cin>>a>>b;
        cout<<"\n Before swapping"<<"\n  n1 = "<<a<<"\n  n2 = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n  n1 = "<<a<<"\n  n2 = "<<b<<endl;
        return 0;
}
