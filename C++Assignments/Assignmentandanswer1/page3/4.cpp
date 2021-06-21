#include<iostream>
#include<cmath>
using namespace std;
void calc(float r, float l){
    float h =sqrt(l*l+r*r);
    float pi=4*atan(1);
    float volume=(1/3)*(pi*r*r*h);
    float surface=(pi*r*r)+(pi*r*l);
    cout<<"Volume of the cone is "<<volume<<" and Surface Area of the cone is "<<surface;
}
int main(){
    cout<<"Enter the radius of the cone:";
    float r;
    cin>>r;
    cout<<"Enter the Slant height of the cone:";
    float l;
    cin>>l;
    calc(r,l);
    return 0;
}
