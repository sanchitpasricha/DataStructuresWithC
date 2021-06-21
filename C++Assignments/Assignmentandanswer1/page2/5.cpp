#include<iostream>
using namespace std;

struct Fraction{
    int numerator;
    int denomenator;
};

int GCD(int a,int b) {
   if (b == 0){
     return a;
   }
   return GCD(b, a % b);
}

int main(){
    Fraction f1,f2,f3;
    cout<<"Enter numerator and denomenator for fraction 1 :: ";
    cin>>f1.numerator>>f1.denomenator;
    cout<<"Enter numerator and denomenator for fraction 2 :: ";
    cin>>f2.numerator>>f2.denomenator;
    f3.numerator=f1.numerator*f2.denomenator+f2.numerator*f1.denomenator;
    f3.denomenator=f1.denomenator*f2.denomenator;
    int deviser = GCD(f3.numerator,f3.denomenator);
    cout<<f3.numerator/deviser<<"/"<<f3.denomenator/deviser;
    
}