#include<iostream>
using namespace std;

int fib (int n)			//for loop method
{

  int s = 0, v1 = 0, v2 = 1, i;

  if (n <= 1)
    {
      return 1;
    }
  else
    {
      for (i = 2; i <= n; i++)
	{
	  s = v1 + v2;
	  v1 = v2;
	  v2 = s;
	}
  return s;
  }
}

int recfib (int n)			//recurion method 
{
  if (n <= 1)
    {
      return n;
    }
  else
    {
      return recfib (n - 1) + recfib (n - 2);
    }
}

int main ()
{
  cout << recfib (6) << endl;
  return 0;
}
