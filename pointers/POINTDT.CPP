#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct rectangle
{
  int length;
  int breadth;
};

void main()
{
  int *p1;
  char *p2;
  float *p3;
  double *p4;
  struct rectangle *p5;

  cout<<sizeof(p1)<<endl;
  cout<<sizeof(p2)<<endl;
  cout<<sizeof(p3)<<endl;
  cout<<sizeof(p4)<<endl;
  cout<<sizeof(p5)<<endl;
  //All statements will print same output as pointer is size independent of data type

  getch();
}