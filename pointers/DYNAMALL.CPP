#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  clrscr();
  int *p,i;
  p=(int*)malloc(7*sizeof(int)); //used in C
  p=new int[5]; //used in C++ to allocate heap memory

  p[0]=10;
  p[1]=20;
  p[2]=30;
  p[3]=40;
  p[4]=50;

  for(i=0;i<5;i++)
  {
    cout<<p[i]<<endl;
  }

  cout<<"\nSize of p "<<sizeof(p); //Pointer is size independent of data type
  getch();
}