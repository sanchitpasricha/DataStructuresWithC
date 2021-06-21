#include<iostream>
using namespace std;
float volume(float h, float l, float b){
    float vol=l*b*h;
    return vol;
}
int main(){
    cout<<"Enter the height, Length and breadth of cuboid";
    float h,l,b;
    cin>>h>>l>>b;
    cout<<volume(h,l,b);
    return 0;
}
