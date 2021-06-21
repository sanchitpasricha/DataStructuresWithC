#include <iostream>
using namespace std;
struct Room{
    float length;
    float breadth;
    float height;
};
int main(){
    Room d1,d2,d3;
    cin>>d1.length;
    cin>>d2.breadth;
    cin>>d3.height;
    float volume=d1.length*d2.breadth*d3.height;
    cout<<"Volume of the room is "<<volume ;
    return 0;
}
