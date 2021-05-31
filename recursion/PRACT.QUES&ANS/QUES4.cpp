#include<iostream>
using namespace std;

void count(int n) 

{

static int d = 1; 
printf("%d", n); 
printf("%d", d); 
d++; 
if (n > 1) count (n-1); 
printf(" %d", d);
} 

int main() {
  count (3);
} 

//OUTPUT
//312213 4 4 4

