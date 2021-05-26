#include<iostream>
using namespace std;

double e (int x, int n) //the larger the n the more precise the result will be
{
  static double p = 1, f = 1;
  double r;
  if (n == 0)
    {
      return (1);
    }
  else
    {
      r = e (x, n - 1);
      p = p * x;
      f = f * n;
      return r + p / f;
    }
}

int main ()
{
  double a;
  a = e (3, 100);
  printf ("%f", a);
}

//OUTPUT - 20.085537
