#include<iostream>
using namespace std;

struct fraction{
  
  int nume;
  int deno;
};

struct addition{
  
  int nume;
  int deno;
};

struct substraction{
  
  int nume;
  int deno;
};

struct multiplication{
  
  int nume;
  int deno;
};

struct division{
  
  int nume;
  int deno;
};


int gcd_func(int a,int b) {
  if (b == 0){
     return a;
  }
  return gcd_func(b, a % b);
}

struct addition add(struct fraction frac1,struct fraction frac2){
    struct addition f3;
    
    f3.nume=frac1.nume*frac2.deno+frac2.nume*frac1.deno;
    f3.deno=frac1.deno*frac2.deno;
    
    int deviser = gcd_func(f3.nume,f3.deno);
    f3.nume/=deviser;
    f3.deno/=deviser;
    
    return f3;
}

struct substraction sub(struct fraction frac1,struct fraction frac2){
    struct substraction f3;
    
    f3.nume=frac1.nume*frac2.deno-frac2.nume*frac1.deno;
    f3.deno=frac1.deno*frac2.deno;
    
    int deviser = gcd_func(f3.nume,f3.deno);
    f3.nume/=deviser;
    f3.deno/=deviser;
    
    return f3;
}

struct multiplication mul(struct fraction frac1,struct fraction frac2){
    struct multiplication f3;
    
    f3.nume=frac1.nume*frac2.nume;
    f3.deno=frac1.deno*frac2.deno;
    
    int deviser = gcd_func(f3.nume,f3.deno);
    f3.nume/=deviser;
    f3.deno/=deviser;
    
    return f3;
}

struct division divi(struct fraction frac1,struct fraction frac2){
    struct division f3;
    
    f3.nume=frac1.nume*frac2.deno;
    f3.deno=frac1.deno*frac2.nume;
    
    int deviser = gcd_func(f3.nume,f3.deno);
    f3.nume/=deviser;
    f3.deno/=deviser;
    
    return f3;
}

int main(){
    
    addition a;
    substraction s;
    multiplication m;
    division d;
    fraction frac1,frac2;
    cout<<"Enter fraction 1 :: ";
    cin>>frac1.nume;
    cin>>frac1.deno;
    cout<<"Enter fraction 2 :: ";
    cin>>frac2.nume;
    cin>>frac2.deno;
    
    a = add(frac1,frac2);
    s = sub(frac1,frac2);
    m = mul(frac1,frac2);
    d = divi(frac1,frac2);
    cout<<"Addition :: "<<a.nume<<"/"<<a.deno<<endl;
    cout<<"Substraction :: "<<s.nume<<"/"<<s.deno<<endl;
    cout<<"Multiplication :: "<<m.nume<<"/"<<m.deno<<endl;
    cout<<"Division :: "<<d.nume<<"/"<<d.deno<<endl;
}