#include <iostream>
using namespace std;
struct Distance{
    float meter;
    int centimeters;
    int millimeters;
};
int main(){
    Distance d1,d2,d3;
    cin>>d1.meter;
    cin>>d2.centimeters;
    d3.millimeters=((d2.centimeters)*10)+((d1.meter)*1000);
    cout<<d3.millimeters;
    return 0;
}