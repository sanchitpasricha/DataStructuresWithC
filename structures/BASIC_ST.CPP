#include<iostream.h>
#include<stdio.h>
#include<conio.h>

struct rectangle
{
int length;
int breadth;
};

int main()
{
  struct rectangle r;
  r.length=15;
  r.breadth=10;
  cout<<"Area of rectangle is "<<r.length*r.breadth;

  getch();

}