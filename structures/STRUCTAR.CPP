#include<iostream.h>
#include<stdio.h>
#include<conio.h>

struct card
{
  int face;
  int shape;
  int color;
};

void main()
{
  clrscr();
  struct card deck[52];
  deck[0].face = 1;
  printf("%d\n",deck[0].face);
  printf("%d",deck[0].shape);

  getch();
}