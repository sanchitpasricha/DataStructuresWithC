#include<iostream>

using namespace std;

int fun (int n)
{
  if (n > 100)
    {
      return n - 10;
    }
  else
    {
      return fun (fun (n + 11));
    }
}

int main ()
{
  int a;
  a = fun (45);
  printf ("%d", a);
  return 0;
}

//OUTPUT - 91
//every value smaller than or equal to 101 will print 91.