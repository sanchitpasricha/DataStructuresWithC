#include <iostream>
using namespace std;

void
headRecursion (int n)
{
  if (n > 0)
    {
      headRecursion (n - 1);
      printf ("%d ", n);
    }
}

void
tailRecursion (int n)
{
  if (n > 0)
    {
      printf ("%d ", n);
      tailRecursion (n - 1);
    }
}

int
main ()
{
  int x = 3;

  headRecursion (x);
  printf ("\n");
  tailRecursion (x);
  return 0;
}

//OUTPUT
//1 2 3
//3 2 1
