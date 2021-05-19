/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct rectangle{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r={10,20};
    struct rectangle *p=&r;
    
    r.length = 15;
    (*p).length = 20;
    p->length = 25;
    
    printf("%d",*p);
    
}
