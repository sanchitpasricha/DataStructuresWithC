#include<iostream>

void fun1 (int n);
void fun2 (int n)
{
  if (n > 0)
    {
      printf ("%d ", n);
      fun1 (n - 1);
    }
}

void fun1 (int n)
{
  if (n > 0)
    {
      fun2 (n / 2);
      printf ("%d ", n);
    }
}

int main ()
{
  fun2 (20);
}
