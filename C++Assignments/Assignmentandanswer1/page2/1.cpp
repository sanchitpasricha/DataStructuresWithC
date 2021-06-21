#include<iostream>
using namespace std;

struct point{
    int x;
    int y;
    int z;
};

int main(){
    int i;
    struct point p[3];
    for(i=1;i<=2;i++){
        cout<<"Enter co-ordinates for point "<<i<<" :: ";
        cin>>p[i].x;
        cin>>p[i].y;
        cin>>p[i].z;
        
    }
    p[3].x=p[1].x+p[2].x;
    p[3].y=p[1].y+p[2].y;
    p[3].z=p[1].z+p[2].z;
    
    cout<<p[3].x<<" "<<p[3].y<<" "<<p[3].z;
}