#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  clrscr();

  int *p,i;
  p=new int[5];
  p[0]=15,p[2]=60;

  for(i=0;i<5;i++)
  {
    cout<<p[i]<<endl;
  }
  delete []p;

  getch();
}